#include "FileManager.h"

void FileManager::save(string& fileName, List& numbers) {

    cout << "Opening file: " << fileName << std::endl;
    ofstream file(fileName);
    if (file) {
        Nodo* current = numbers.getHeader();
        while (current != nullptr) {
            writeOnFile(current, file);
        }
    }
    else {
        std::cerr << "Unable to open the file: " << fileName << std::endl;
        return;
    }

    std::cout << "The file " << fileName << " has been saved.";
    file.close();
}

void FileManager::writeOnFile(Nodo*& current, std::ofstream& file)
{
    file << "-----------------------------" << endl;
    file << "Number: " <<current->getValue()<< endl;
    current = current->getNext();
    file << std::endl;
}

void FileManager::load(string& fileName, List& numbers) {
    std::ifstream file(fileName);
    std::string line;

    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + fileName);
        return;
    }

    while (getline(file, line)) {
        extractFromFile(line, file, numbers);
    }
}

void FileManager::extractFromFile(std::string& line, std::ifstream& file, List& numbers)
{
    if (line.find("Number:") != string::npos) {
        string number;
        int pos = line.find(":") + 1;
        number = line.substr(pos,line.size()-1);
        numbers.insertFinal(stoi(number));
    }
}

