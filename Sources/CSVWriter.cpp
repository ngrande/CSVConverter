//
// Created by ngrande on 12/3/15.
//

#include "CSVWriter.h"
#include <fstream>

void CSVWriter::write(std::string path, CSVMatch *matches) {
    std::ofstream stream;
    stream.open(path);

    if (stream.is_open())
    {
        // match the source to the destination as specified in the xml and write the values to the file

    }
}
