#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileManager
{
private:


public:
	FileManager() {};

	void save(string* line, int newLineSize,string fileName);
	string* load(string fileName);
	int getQuantityOfLines(string fileName);
	void addText(string* newLine, int newLineSize, string fileName);
	int numberObjects(string type, string* file, int fileSize);
	string* getSpecificList(string type, string* file, int fileSize);
};

