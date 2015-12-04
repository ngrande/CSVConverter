//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_CSVWRITER_H
#define CSVCONVERTER_CSVWRITER_H

#include "CSVMatch.h"
#include "IWriter.h"

// used to write / create a new .csv file and match the source to the destination names
class CSVWriter : public IWriter {
public:
    virtual void write(std::string path, CSVMatch* matches);
};


#endif //CSVCONVERTER_CSVWRITER_H
