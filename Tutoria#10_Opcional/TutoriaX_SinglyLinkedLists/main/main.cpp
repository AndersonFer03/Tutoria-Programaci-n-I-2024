
#include <iostream>
#include "list.h"
int main()
{
    List listNumbers = List();
    cout << "--- Lista Enlazada Simple ---" << endl << endl;
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
    cout << endl << endl;

    List orderedList = List();
    cout << "--- Lista Enlazada Simple Ordenada ---" << endl << endl;
    orderedList.insertOrdered(5);
    orderedList.insertOrdered(3);
    orderedList.insertOrdered(8);
    orderedList.insertOrdered(9);
    orderedList.insertOrdered(6);
    orderedList.insertOrdered(1);
    orderedList.print();
    cout << endl << endl;
    listNumbers.deleteList();
    cout << "Lista: \n";
    listNumbers.print();

}


