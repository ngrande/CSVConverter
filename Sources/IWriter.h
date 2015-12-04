//
// Created by ngrande on 12/4/15.
//

#ifndef CSVCONVERTER_IWRITER_H
#define CSVCONVERTER_IWRITER_H

#include <string>
#include <map>
#include "CSVXmlMatch.h"
#include "CSVField.h"
#include <vector>

class IWriter {
public:
    virtual void write(std::string path, std::vector<CSVXmlMatch> *matches, std::map<int, std::string> *headerMap,
                       std::vector<std::vector<CSVField>> *fields, std::string valueOrder) = 0;
};


#endif //CSVCONVERTER_IWRITER_H
