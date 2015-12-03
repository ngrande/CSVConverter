//
// Created by ngrande on 12/3/15.
//

#include <fstream>
#include "CSVWriter.h"

void CSVWriter::write(std::string outputFilename) {
    std::ofstream stream;
    stream.open(outputFilename);

    if (stream.is_open())
    {
        // match the source to the destination as specified in the xml and write the values to the file
    }
}
