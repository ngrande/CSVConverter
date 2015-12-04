#include <iostream>
#include "Sources/CSVMain.h"

using namespace std;

int main(int argc, char* argv[]) {
    CSVMain main;

    if (argc == 4) {
        main.start(argv[1], argv[2], argv[3]);
        return 0;
    }
    else
    {
        throw "Not enough arguments!";
    }
}