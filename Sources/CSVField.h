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
public:
    CSVField(std::string name, std::string value) : name(name), value(value) {};

    const std::string &getName() const {
        return name;
    }

    const std::string &getValue() const {
        return value;
    }
};


#endif //CSVCONVERTER_CSVFIELD_H
