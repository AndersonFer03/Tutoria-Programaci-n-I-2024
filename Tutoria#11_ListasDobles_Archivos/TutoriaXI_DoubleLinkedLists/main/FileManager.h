#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "list.h"
#include "nodo.h"

class FileManager {
public:
    FileManager() {}
    void save(string& fileName, List& numbers);
    void writeOnFile(Nodo*& current, std::ofstream& file);
    void load(string& fileName, List& numbers);
    void extractFromFile(std::string& line, std::ifstream& file, List& numbers);

};


