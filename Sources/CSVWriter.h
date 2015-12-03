//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_CSVWRITER_H
#define CSVCONVERTER_CSVWRITER_H

#include "CSVMatch.h"

// used to write / create a new .csv file and match the source to the destination names
class CSVWriter {
private:
    CSVMatch *matches;
public:
    CSVWriter(CSVMatch* matches) : matches(matches) {};
    void write(std::string outputFilename);
};


#endif //CSVCONVERTER_CSVWRITER_H
