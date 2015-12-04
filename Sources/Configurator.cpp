//
// Created by ngrande on 12/4/15.
//

#include "Configurator.h"

int Configurator::getMatchCount() {
    int count = 0;
    rapidxml::xml_node<> *rootNode = doc->first_node();
    rootNode = rootNode->first_node("values");

    for (rapidxml::xml_node<> *valueNode = rootNode->first_node("value"); valueNode; valueNode= valueNode->next_sibling())
    {
        count++;
    }

    return count;
}

void Configurator::getCSVMatches(CSVMatch *matches) {
    rapidxml::xml_node<> *rootNode = doc->first_node();
    rootNode = rootNode->first_node("values");

    int i = 0;
    for (rapidxml::xml_node<> *valueNode = rootNode->first_node("value"); valueNode; valueNode= valueNode->next_sibling())
    {
        matches[i++] = CSVMatch(valueNode->first_attribute("id")->value(), valueNode->first_node("source")->value(),
                                valueNode->first_node("destination")->value());
    }
}

std::string Configurator::getOrderStr() {
    rapidxml::xml_node<> *node = doc->first_node()->first_node("order");
    if (node != 0) {
        return node->value();
    }
    else {
        return nullptr;
    }
}

Configurator::Configurator(std::string path) {
    rapidxml::file<> xmlFile = rapidxml::file<>(path.c_str());
    doc = new rapidxml::xml_document<>();
    doc->parse<0>(xmlFile.data());
}

Configurator::~Configurator() {
    delete doc;
}
