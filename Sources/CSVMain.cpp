//
// Created by ngrande on 12/4/15.
//

#include "CSVMain.h"
#include "Configurator.h"

int CSVMain::start() {
    csvReader = new CSVReader("/home/ngrande/Downloads/OutlookContacts.csv");
    delete csvReader;
    Configurator configurator("/home/ngrande/Projects/ClionProjects/CSVConverter/CSVConverterConfig.xml");

    int size = configurator.getMatchCount();
    CSVMatch matches[size];
    configurator.getCSVMatches(matches);

    writerInstance = new CSVWriter();
    writerInstance->write("Output.csv", matches);
    delete writerInstance;

    return 0;
}
