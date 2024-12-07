#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "circularSinglyLinkedList.h"
#include "doublyLinkedList.h"
#include "singlyLinkedList.h"
//#include "nodo.h"

class FileManager {
public:
    FileManager() {}
    void abrirFacebookPosts(string& fileName, PhotoList*& fotos, VideosList*& videos, TextList*& textos);
    void extraerPublicacion(string& line, PhotoList*& fotos, VideosList*& videos, TextList*& textos);

};
