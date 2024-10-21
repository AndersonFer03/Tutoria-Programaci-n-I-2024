#include <iostream>
#include "list.h"
#include <vector>

int main()
{

    List<int> listNumbers;
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
    listNumbers.eliminateNodo(number);
    listNumbers.print();
    cout << endl << endl;
    number = 4;
    cout << "Valor a eliminar: " << number << endl;
    listNumbers.eliminateNodo(number);
    listNumbers.print();
    cout << endl << endl;

    cout << "--- Eliminar Lista ---" << endl << endl;
    listNumbers.deleteList();
    listNumbers.print();
    cout << endl << endl;




}