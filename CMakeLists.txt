cmake_minimum_required(VERSION 3.3)
project(CSVConverter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp RapidXML/rapidxml.hpp RapidXML/rapidxml_iterators.hpp RapidXML/rapidxml_print.hpp
        RapidXML/rapidxml_utils.hpp Sources/ICSVValues.cpp Sources/ICSVValues.h Sources/OutlookCSVValues.cpp Sources/OutlookCSVValues.h)
add_executable(CSVConverter ${SOURCE_FILES})