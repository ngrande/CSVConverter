//
// Created by ngrande on 12/4/15.
//

#ifndef CSVCONVERTER_CSVMAIN_H
#define CSVCONVERTER_CSVMAIN_H


#include "CSVReader.h"
#include "CSVWriter.h"

class CSVMain {
private:
    CSVReader *csvReader;
    IWriter *writerInstance;
public:
    int start();
};


#endif //CSVCONVERTER_CSVMAIN_H
