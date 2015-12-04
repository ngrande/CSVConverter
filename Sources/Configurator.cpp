//
// Created by ngrande on 12/4/15.
//

#include "Configurator.h"

int Configurator::getMatchCount() {
    rapidxml::xml_document<> doc;

    int count = 0;

    doc.parse<0>(xmlFile->data());
    rapidxml::xml_node<> *node = doc.first_node("value");

    while (node != 0) {
        node = node->next_sibling();
        count++;
    }
    return count;
}

void Configurator::getCSVMatches(CSVMatch *matches) {
    rapidxml::xml_document<> doc;

    doc.parse<0>(xmlFile->data());
    rapidxml::xml_node<> *node = doc.first_node("value");

    int i = 0;
    while (node != 0) {
        matches[i++] = CSVMatch(node->first_attribute("id")->value(), node->first_node("source")->value(),
                                node->first_node("destination")->value());
        node = node->next_sibling();
    }

}

std::string Configurator::getOrderStr() {
    rapidxml::xml_document<> doc;
}

Configurator::Configurator(std::string path) {
    this->xmlFile =new rapidxml::file<>(path.c_str());
}

Configurator::~Configurator() {
    delete xmlFile;
}
