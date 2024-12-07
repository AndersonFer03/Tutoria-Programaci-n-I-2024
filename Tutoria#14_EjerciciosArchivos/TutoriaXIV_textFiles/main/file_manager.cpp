#include "file_manager.h"

void FileManager::save(string* newLine, int newLineSize, string fileName)
{
	ofstream newDataSave(fileName);

	if (!newDataSave.is_open())
	{
		cerr << "No se puedo abrir el archivo con exito ";
		return;
	}

	for (int i = 0; i < newLineSize; i++)
	{
		newDataSave << newLine[i];
	}
	newDataSave.close();
}

string* FileManager::load(string fileName)
{
	string* newFile;
	string loadLine;
	int fileLinesCounter = 0;
	ifstream newDataLoad;

	newDataLoad.open(fileName);

	newFile = new string[getQuantityOfLines(fileName)];

	if (!newDataLoad.is_open())
	{
		cerr << "No se pudo abrir el archivo :(";
		return newFile;
	}

	while (getline(newDataLoad, loadLine))
	{
		newFile[fileLinesCounter] = loadLine;
		fileLinesCounter += 1;
	}

	newDataLoad.close();

	return newFile;
}

int FileManager::getQuantityOfLines(string fileName)
{
	string loadLine;
	int quantityOfLines = 0;
	ifstream newDataLoad;

	newDataLoad.open(fileName);

	if (!newDataLoad.is_open())
	{
		cerr << "No se pudo abrir el archivo :(";
		return -1;
	}

	while (getline(newDataLoad, loadLine))
	{
		quantityOfLines += 1;
	}

	newDataLoad.close();

	return quantityOfLines;
}

void FileManager::addText(string* newLine, int newLineSize,string fileName) {
	ofstream file;
	file.open(fileName, ios::app);
	if (file.fail())
	{
		cerr << "Error al abrir ejemplo.dat\n";
		exit(EXIT_FAILURE);
		return;
	}
	for (int i = 0; i < newLineSize; i++)
	{
		file << newLine[i];
	}
	file.close();
}
int FileManager::numberObjects(string type, string* file, int fileSize) {
	int position = 0, count=0;
	string typeObject;

	for (int i = 0;i < fileSize;i++) {
		position = file[i].find(";");
		typeObject = file[i].substr(0, position);
		if (typeObject == type) {
			count++;
		}
	}
	return count;
}
string* FileManager::getSpecificList(string type, string* file, int fileSize) {
	string* list = new string[numberObjects(type,file,fileSize)];
	int position = 0, index=0;
	string typeObject;
	for (int i = 0;i < fileSize;i++) {
		position = file[i].find(";");
		typeObject = file[i].substr(0, position);
		if (typeObject == type) {
			list[index] = file[i];
			index++;
		}
	}
	return list;
}

