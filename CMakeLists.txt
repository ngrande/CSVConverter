cmake_minimum_required(VERSION 3.3)
project(CSVConverter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp RapidXML/rapidxml.hpp RapidXML/rapidxml_iterators.hpp RapidXML/rapidxml_print.hpp
        RapidXML/rapidxml_utils.hpp Sources/CSVMatch.cpp Sources/CSVMatch.h Sources/CSVField.cpp Sources/CSVField.h Sources/CSVReader.cpp Sources/CSVReader.h Sources/CSVWriter.cpp Sources/CSVWriter.h Sources/CSVMain.cpp Sources/CSVMain.h Sources/Configurator.cpp Sources/Configurator.h Sources/IWriter.cpp Sources/IWriter.h)
add_executable(CSVConverter ${SOURCE_FILES})