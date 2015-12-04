//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_CSVWRITER_H
#define CSVCONVERTER_CSVWRITER_H

#include "CSVXmlMatch.h"
#include "IWriter.h"

// used to write / create a new .csv file and match the source to the destination names with the specified order
class CSVWriter : public IWriter {
private:
    bool replaceStr(std::string *str, const std::string *replaceSequence, const std::string *toSequence);

public:
    virtual void write(std::string path, std::vector<CSVXmlMatch> *matches, std::map<int, std::string> *headerMap,
                       std::vector<std::vector<CSVField>> *fields, std::string valueOrder);
};


#endif //CSVCONVERTER_CSVWRITER_H
