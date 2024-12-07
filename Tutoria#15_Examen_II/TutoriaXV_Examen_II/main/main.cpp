#include <iostream>
#include "FileManager.h"
//#include "circularSinglyLinkedList.h"
//#include "doublyLinkedList.h"
//#include "singlyLinkedList.h"
int main()
{
    
    // Crear las listas para almacenar las publicaciones
    PhotoList* fotos = new PhotoList();
    VideosList* videos=new VideosList();
    TextList* textos=new TextList();

    FileManager fileManager;

    string fileName = "FacebookPosts.txt";

    
    fileManager.abrirFacebookPosts(fileName, fotos, videos, textos);

    cout << "\n\n ---- Publicaciones de Fotos: ----\n";
    fotos->print();  

    cout << "\n\n---- Publicaciones de Videos: ----\n";
    videos->print();

    cout << "\n\n---- Publicaciones de Texto: ----\n";
    textos->print(); 

    string paisMax = fotos->countryWithMostPublications();
    cout << "\nPais con mas publicaciones de fotos: " << paisMax << '\n';

    return 0;
}

