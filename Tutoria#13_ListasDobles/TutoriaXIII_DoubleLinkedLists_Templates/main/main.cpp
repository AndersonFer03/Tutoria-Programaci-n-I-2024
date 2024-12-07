#include <iostream>
#include "list.h"
#include <vector>

int main()
{

    List<int> listNumbers;
    cout << "--- Lista Doblemente Enlazada ---" << endl << endl;
    listNumbers.insertHeader(2);
    listNumbers.insertHeader(5);
    listNumbers.insertHeader(8);
    listNumbers.insertHeader(3);
    listNumbers.insertHeader(3);
    listNumbers.insertHeader(9);
    listNumbers.insertHeader(2);
    listNumbers.insertHeader(8);
    listNumbers.insertFinal(4);
    listNumbers.print();
    cout << endl << endl;


    // Invertir la lista
    listNumbers.invert();
    cout << "--- Lista invertida: ---\n\n";
    listNumbers.print();
    cout << endl << endl;

    // Eliminar duplicados
    listNumbers.removeDuplicates();
    cout << "--- Lista sin duplicados: ---\n\n";
    listNumbers.print();
    cout << endl << endl;

    cout << "--- Eliminar Lista ---" << endl << endl;
    listNumbers.deleteList();
    listNumbers.print();
    cout << endl << endl;




}