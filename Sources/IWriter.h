//
// Created by ngrande on 12/4/15.
//

#ifndef CSVCONVERTER_IWRITER_H
#define CSVCONVERTER_IWRITER_H

#include <string>
#include "CSVMatch.h"

class IWriter {
public:
    virtual void write(std::string path, CSVMatch *matches) = 0;
};


#endif //CSVCONVERTER_IWRITER_H
