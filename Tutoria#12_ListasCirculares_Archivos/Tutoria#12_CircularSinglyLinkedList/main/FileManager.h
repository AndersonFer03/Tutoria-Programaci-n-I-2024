#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "list.h"
#include "node.h"

class FileManager {
public:
    FileManager() {}
    void save(string& fileName, List& courses);
    void addText(string& fileName, List& courses);
    void writeOnFile(Node*& current, std::ofstream& file);
    void load(string& fileName, List& courses);
    void extractFromFile(std::string& line, std::ifstream& file, List& courses);
};

