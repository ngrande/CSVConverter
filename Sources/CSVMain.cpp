//
// Created by ngrande on 12/4/15.
//

#include "CSVMain.h"
#include "Configurator.h"

int CSVMain::start(std::string sourcePath, std::string xmlConfigPath, std::string outPath) {
    csvReader = new CSVReader(sourcePath);
    int filedCount = csvReader->getHeaderCount();
    std::vector<std::vector<CSVField>> fields[filedCount];
    std::map<int, std::string> headerMap = csvReader->getFields(fields);
    delete csvReader;
    Configurator configurator(xmlConfigPath);

    int matchCount = configurator.getMatchCount();
    std::vector<CSVXmlMatch> matches[matchCount];
    configurator.getCSVMatches(matches);

    writerInstance = new CSVWriter();
    writerInstance->write(outPath, matches, &headerMap, fields, configurator.getOrderStr());
    delete writerInstance;

    return 0;
}
