//
// Created by ngrande on 12/3/15.
//

#ifndef CSVCONVERTER_OUTLOOKREADERVALUES_H
#define CSVCONVERTER_OUTLOOKREADERVALUES_H


#include "ICSVValues.h"

class OutlookCSVValues : public ICSVValues {

public:
    virtual std::string getFirstNameValue();

    virtual std::string getLastNameValue();

    virtual std::string getPrimaryEmailValue();

    virtual std::string getSecondaryEmailValue();
};


#endif //CSVCONVERTER_OUTLOOKREADERVALUES_H
