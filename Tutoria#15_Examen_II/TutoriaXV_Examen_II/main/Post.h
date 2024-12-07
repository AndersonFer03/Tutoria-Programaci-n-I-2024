#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Post {
private:
    string tipo;
    string categoria;
    string titulo;
    string pais;
    string url;
    int tiempoPublicacion;

public:
    Post(){}
    Post(string pTipo, string pCategoria, string pTitulo, string pPais, string pUrl, int pTiempoPublicacion)
        : tipo(pTipo), categoria(pCategoria), titulo(pTitulo), pais(pPais), url(pUrl), tiempoPublicacion(pTiempoPublicacion) {}

    string getTipo() { return tipo; }
    string getCategoria() { return categoria; }
    string getTitulo() { return titulo; }
    string getPais() { return pais; }
    string getUrl() { return url; }
    int getTiempoPublicacion() { return tiempoPublicacion; }

 
    void setTipo(string pTipo) { tipo = pTipo; }
    void setCategoria(string pCategoria) { categoria = pCategoria; }
    void setTitulo(string pTitulo) { titulo = pTitulo; }
    void setPais(string pPais) { pais = pPais; }
    void setUrl(string pUrl) { url = pUrl; }
    void setTiempoPublicacion(int pTiempoPublicacion) { tiempoPublicacion = pTiempoPublicacion; }
    string toString() {
        stringstream ss;
        ss << "Tipo: " << tipo << "\n"
            << "Categoria: " << categoria << "\n"
            << "Titulo: " << titulo << "\n"
            << "Pais: " << pais << "\n"
            << "URL: " << url << "\n"
            << "Tiempo de Publicacion: " << tiempoPublicacion << " horas\n";
        return ss.str();
    }
};