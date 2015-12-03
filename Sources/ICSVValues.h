//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_READERVALUES_H
#define CSVCONVERTER_READERVALUES_H

#include <string>

// Interface for reader class values (i.e. to get the source format value for the field "First Name" or "E-Mail"
class ICSVValues {
public:
    virtual std::string getFirstNameValue() = 0;
    virtual std::string getLastNameValue() = 0;
    virtual std::string getPrimaryEmailValue() = 0;
    virtual std::string getSecondaryEmailValue() = 0;
};


#endif //CSVCONVERTER_READERVALUES_H
