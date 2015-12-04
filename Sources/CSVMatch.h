//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_CSVVALUE_H
#define CSVCONVERTER_CSVVALUE_H

#include <string>

class CSVMatch {
private:
    std::string id;
    std::string source;
    std::string destination;
public:
    CSVMatch() {};
    CSVMatch(std::string id, std::string source, std::string destination) : id(id), source(source), destination(destination) {};

    const std::string &getId() const {
        return id;
    }

    const std::string &getSource() const {
        return source;
    }

    const std::string &getDestination() const {
        return destination;
    }
};


#endif //CSVCONVERTER_CSVVALUE_H
