//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_CSVREADER_H
#define CSVCONVERTER_CSVREADER_H

#include <fstream>
#include <string>
#include "CSVField.h"

class CSVReader {
private:
    std::string path;
    const char SEPARATOR = ',';
public:
    CSVReader(std::string path) : path(path) {};
    int getFieldCount();
    void getFields(CSVField* fields);
};


#endif //CSVCONVERTER_CSVREADER_H
