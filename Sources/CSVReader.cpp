//
// Created by ngrande on 12/3/15.
//

#include <map>
#include "CSVReader.h"

int CSVReader::getFieldCount() {
    std::ifstream stream;
    stream.open(path);

    if (stream.is_open()) {
        int count = 0;
        std::string line;
        while (getline(stream, line)) {
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

void CSVReader::getFields(CSVField *fields) {
    std::ifstream stream;
    stream.open(path);

    if (stream.is_open()) {
        bool isFirstLine = true;
        std::string line;
        std::map<int, std::string> headerMap;
        int fieldCount = 0;

        while (getline(stream, line)) {
            int index = 0;
            std::string tempValue = "";

            // Read header field
            for (int i = 0; i < line.size(); i++) {
                char lineChar = line[i];

                // if current char != ','
                if (lineChar != SEPARATOR) {
                    tempValue += lineChar;
                }
                else if (isFirstLine) {
                    headerMap[index] = tempValue;
                    index++;
                    tempValue = "";
                }
                else {
                    fields[fieldCount] = CSVField(headerMap[index], tempValue);
                    fieldCount++;
                    index++;
                    tempValue = "";
                }
            }

            // after first iteration
            isFirstLine = false;
        }
    }

}