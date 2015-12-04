//
// Created by ngrande on 12/3/15.
//

#include "CSVReader.h"

int CSVReader::getHeaderCount() {
    std::ifstream stream;
    stream.open(path);

    if (stream.is_open()) {
        int count = 0;
        std::string line;
        if (getline(stream, line)) {
            // count the commas
            // but only if there is a field name (word) after this comma
            ulong size = line.size();
            for (int i = 0; i < size; i++) {
                // if the char is a comma but not at the end of the line
                // because that would mean an empty field
                if (line[i] == ',') {
                    count++;
                }
            }
        }

        stream.close();
        return count;
    }
    else {
        return 0;
    }
}

std::map<int, std::string> CSVReader::getFields(std::vector<std::vector<CSVField>> *fields) {
    std::ifstream stream;
    stream.open(path);
    std::map<int, std::string> headerMap;

    int commas = getHeaderCount();
    int commaCount = 0;

    if (stream.is_open()) {
        bool isFirstLine = true;
        std::string line;

        int index = 0;
        std::string tempValue = "";
        std::vector<CSVField> lineVector;
        bool quoted = false;

        while (getline(stream, line)) {

            // Read header field
            for (int i = 0; i < line.size(); i++) {
                char lineChar = line[i];

                if (lineChar == '"') {
                    quoted = !quoted;
                }
                if (lineChar != SEPARATOR | quoted) {
                    tempValue += lineChar;
                }
                else {
                    if (isFirstLine) {
                        headerMap[index] = tempValue;
                    }

                    lineVector.push_back(CSVField(index, headerMap[index], tempValue));
                    index++;
                    tempValue = "";

                    commaCount++;
                    if (commaCount == commas) {
                        fields->push_back(lineVector);
                        commaCount = 0;
                        index = 0;
                        lineVector = std::vector<CSVField>();
                    }
                }
            }

            // after first iteration
            isFirstLine = false;
        }
    }

    return headerMap;
}