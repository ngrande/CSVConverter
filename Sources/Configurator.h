//
// Created by ngrande on 12/4/15.
//

#ifndef CSVCONVERTER_CONFIGURATOR_H
#define CSVCONVERTER_CONFIGURATOR_H

#include <string>
#include "CSVXmlMatch.h"
#include "../RapidXML/rapidxml_utils.hpp"
#include <vector>

class Configurator {
private:
    rapidxml::xml_document<> *doc;
public:
    Configurator(std::string path);
    int getMatchCount();
    void getCSVMatches(std::vector<CSVXmlMatch> *matches);
    std::string getOrderStr();
    ~Configurator();
};


#endif //CSVCONVERTER_CONFIGURATOR_H
