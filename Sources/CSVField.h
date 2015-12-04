//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_CSVFIELD_H
#define CSVCONVERTER_CSVFIELD_H

#include <string>

class CSVField {
private:
    std::string name;
    std::string value;
    int headerInd;
public:
    CSVField() {};
    CSVField(int headerInd, std::string name, std::string value) : headerInd(headerInd), name(name), value(value) {};

    const std::string &getName() const {
        return name;
    }

    const std::string &getValue() const {
        return value;
    }

    int getHeaderInd() const {
        return headerInd;
    }
};


#endif //CSVCONVERTER_CSVFIELD_H
