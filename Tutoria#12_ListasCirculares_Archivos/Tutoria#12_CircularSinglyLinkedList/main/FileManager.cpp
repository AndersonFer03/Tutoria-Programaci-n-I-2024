#include "FileManager.h"

void FileManager::save(string& fileName, List& courses) {

    cout << "Opening file: " << fileName << std::endl;
    ofstream file(fileName);
    if (file) {
        Node* current = courses.getHeader();
        do {
            writeOnFile(current, file);
        } while (current != courses.getHeader());
    }
    else {
        std::cerr << "Unable to open the file: " << fileName << std::endl;
        return;
    }

    std::cout << "The file " << fileName << " has been saved.";
    file.close();
}
void FileManager::addText(string& fileName, List& courses) {
    ofstream file;
    cout << "\nOpening file: " << fileName << std::endl;
    file.open(fileName, ios::app);
    if (file) {
        Node* current = courses.getHeader();
        do {
            writeOnFile(current, file);
        } while (current != courses.getHeader());
    }
    else {
        std::cerr << "Unable to open the file: " << fileName << std::endl;
        return;
    }
    std::cout << "The file " << fileName << " has been saved.";
    file.close();
}
void FileManager::writeOnFile(Node*& current, std::ofstream& file)
{
    file << current->getCourse()->toString();
    current = current->getNext();
    file << std::endl;
}

void FileManager::load(string& fileName, List& courses) {
    std::ifstream file(fileName);
    std::string line;

    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + fileName);
        return;
    }

    while (getline(file, line)) {
        extractFromFile(line, file, courses);
    }
}

void FileManager::extractFromFile(std::string& line, std::ifstream& file, List& courses)
{
    if (line.find(",") != string::npos) {
        string name;
        int amountStudents, NRC;
        int pos = line.find(",");
        name = line.substr(0, pos);
        line = line.substr(pos + 1, line.size() - pos - 1);
        pos = line.find(",");
        amountStudents = stoi(line.substr(0, pos));
        NRC = stoi(line.substr(pos + 1, line.size() - pos - 1));
        Course* newCourse = new Course(name, amountStudents, NRC);
        courses.insertHeader(newCourse);
    }
}


