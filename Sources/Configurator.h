//
// Created by ngrande on 12/4/15.
//

#ifndef CSVCONVERTER_CONFIGURATOR_H
#define CSVCONVERTER_CONFIGURATOR_H

#include <string>
#include "CSVMatch.h"
#include "../RapidXML/rapidxml_utils.hpp"

class Configurator {
private:
    rapidxml::file<> *xmlFile;
public:
    Configurator(std::string path);
    int getMatchCount();
    void getCSVMatches(CSVMatch* matches);
    std::string getOrderStr();
    ~Configurator();
};


#endif //CSVCONVERTER_CONFIGURATOR_H
