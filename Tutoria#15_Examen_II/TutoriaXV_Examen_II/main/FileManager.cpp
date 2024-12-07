#include "FileManager.h"

void FileManager::abrirFacebookPosts(string& fileName, PhotoList*& fotos, VideosList*& videos, TextList*& textos) {
    std::ifstream file(fileName);
    string line;

    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + fileName);
        return;
    }

    while (getline(file, line)) {
        extraerPublicacion(line, fotos, videos, textos);
    }

    file.close();
}
void FileManager::extraerPublicacion(string& line, PhotoList*& fotos, VideosList*& videos, TextList*& textos) {
    string tipo="", categoria="", titulo="", pais="", url="", tiempo = "";
    int tiempoPublicacion = 0;

    int nextPos=0;
    if (line.find(",") != string::npos) {

        nextPos = line.find(',');
        tipo = line.substr(0, nextPos);
        line = line.substr(nextPos+1, line.size() - nextPos - 1);

        nextPos = line.find(',');
        categoria = line.substr(0, nextPos);
        line = line.substr(nextPos + 1, line.size() - nextPos - 1);

        nextPos = line.find(',');
        titulo = line.substr(0, nextPos);
        line = line.substr(nextPos + 1, line.size() - nextPos - 1);

        nextPos = line.find(',');
        pais = line.substr(0, nextPos);
        line = line.substr(nextPos + 1, line.size() - nextPos - 1);

        nextPos = line.find(',');
        url = line.substr(0, nextPos);
        line = line.substr(nextPos + 1, line.size() - nextPos - 1);

        nextPos = line.find(',');
        tiempo = line.substr(0, nextPos);
        tiempoPublicacion = stoi(tiempo);


        Post nuevaPublicacion(tipo, categoria, titulo, pais, url, tiempoPublicacion);


        if (tipo == "Foto") {
            fotos->insertHeader(nuevaPublicacion);
        }
        else if (tipo == "Video") {
            videos->insertFinal(nuevaPublicacion);
        }
        else if (tipo == "Texto") {
            textos->insertOrdered(nuevaPublicacion);
        }
    }
}
