
#include <iostream>
#include "list.h"
#include "FileManager.h"
int main()
{
    List listNumbers = List();
    cout << "--- Lista Doblemente Enlazada ---" << endl << endl;
    listNumbers.insertHeader(2);
    listNumbers.insertHeader(5);
    listNumbers.insertHeader(8);
    listNumbers.insertHeader(3);
    listNumbers.insertHeader(9);
    listNumbers.insertHeader(1);
    listNumbers.insertFinal(4);
    listNumbers.print();
    cout << endl << endl;
    int number = 8;
    cout << "Valor a eliminar: " << number << endl;
    listNumbers.deleteNodo(number);
    listNumbers.print();
    number = 4;
    cout << "\n\nValor a eliminar: " << number << endl;
    listNumbers.deleteNodo(number);
    listNumbers.print();
    cout << endl << endl;

    cout << "--- Guardar Lista en Archivo de texto ---" << endl << endl;
    FileManager fm;
    string path = "C:\\Users\\Anderson\\Desktop\\Tutorias\\Tutoria Programación I - CICLO II 2024\\Sesiones\\Tutoria#11\\TutoriaXI_DoubleLinkedLists\\main\\files\\numbers.txt";
    fm.save(path,listNumbers);

    cout << "\n\n--- Eliminar lista ---" << endl << endl;
    listNumbers.deleteList();
    cout << "Lista: \n";
    listNumbers.print();

    cout << "\n\n--- Cargar Lista de un Archivo de texto ---" << endl << endl;
    fm.load(path,listNumbers);
    listNumbers.print();

}