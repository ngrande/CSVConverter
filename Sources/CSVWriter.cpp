//
// Created by ngrande on 12/3/15.
//

#include "CSVWriter.h"
#include "Configurator.h"

void CSVWriter::write(std::string path, std::vector<CSVXmlMatch> *matches, std::map<int, std::string> *headerMap,
                      std::vector<std::vector<CSVField>> *fields, std::string valueOrder) {
    std::ofstream stream;
    stream.open(path);

    std::string line = valueOrder;

    if (stream.is_open()) {
        // match the source to the destination as specified in the xml and write the values to the file
        for (int i = 0; i < fields->size(); i++) {
            std::vector<CSVField> lineVector = fields->at(i);

            for (int j = 0; j < lineVector.size(); j++) {
                CSVField field = lineVector.at(j);
                int headerInd = field.getHeaderInd();
                std::string header = headerMap->at(headerInd);

                for (int k = 0; k < matches->size(); k++) {
                    CSVXmlMatch match = matches->at(k);
                    if (header == match.getSource()) {
                        replaceStr(&line, &match.getId(), &field.getValue());
                    }
                }
            }

            // line is over -> next
            stream << line << std::endl;
            line = valueOrder;
        }

        stream.close();
    }
}

bool CSVWriter::replaceStr(std::string *str, const std::string *replaceSequence, const std::string *toSequence) {
    size_t startPos = str->find(replaceSequence->c_str());

    if (startPos == std::string::npos) {
        return false;
    }

    str->replace(startPos, replaceSequence->length(), toSequence->c_str());
    return true;
}
