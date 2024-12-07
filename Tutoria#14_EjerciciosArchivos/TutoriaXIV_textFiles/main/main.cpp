

#include <iostream>
#include "car.h"
#include "motorcycle.h"
#include "linked_listCar.h"
#include "linked_listMotorcycle.h"
#include "file_manager.h"
int main()
{
    FileManager fileManager = FileManager();
    string fileName = "data.txt";
    LinkedListCar* listCar = new  LinkedListCar();
    Car toyota = Car("Carro","Camry 2004", "Toyota", 20000000,"Automatico");
    Car hyundai = Car("Carro","Tucson 2023", "Hyundai", 5000000,"Manual");
    Car nissan = Car("Carro","Sentra 2020", "Nissan", 10000000, "Automatico");
    listCar->insert(toyota);
    listCar->insert(nissan);
    listCar->insert(hyundai);
    cout << "--- Lista de Carros ---" << endl;
    listCar->print();
    string* carTextList = listCar->createTextList();
    int countCar = listCar->countCar();
    fileManager.save(carTextList, countCar,fileName);
    cout << endl << endl;
    cout << "--- Lista de Motos ---" << endl;
    LinkedListMotorcycle* listMotorcycle = new  LinkedListMotorcycle();
    Motorcycle yamaha = Motorcycle("Moto", "2005", "Yamaha", 1500000, "Enduro");
    Motorcycle susuki = Motorcycle("Moto", "2023", "Susuki", 7500000, "Urbana");
    Motorcycle honda = Motorcycle("Moto", "2020", "Honda", 2000000, "Turismo");
    listMotorcycle->insert(yamaha);
    listMotorcycle->insert(susuki);
    listMotorcycle->insert(honda);
    listMotorcycle->print();
    string* motorcycleTextList = listMotorcycle->createTextList();
    int countMotorcycle = listMotorcycle->countMotorcycle();
    fileManager.addText(motorcycleTextList, countMotorcycle,fileName);

    cout << "--- Cargar lista de Carros ---" << endl;
    string* file = fileManager.load("data.txt");
    int sizeFile = fileManager.getQuantityOfLines("data.txt");
    sizeFile = fileManager.numberObjects("Carro", file, sizeFile);
    file = fileManager.getSpecificList("Carro", file, sizeFile);
    LinkedListCar* newList= new LinkedListCar();
    newList->loadTextList(file, sizeFile);
    newList->print();
   
}
