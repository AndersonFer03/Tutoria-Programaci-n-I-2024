
#include <iostream>
#include <vector>
#include "Peces.h"
#include "Aves.h"
#include "Anfibios.h"
int main()
{
	//VertebrateAnimals animal = Pez("Globo", "Escamas", "Branquias", "Huevos", "Salada", "Herviboros");
	VertebrateAnimals* animals[4];
	animals[0] = new Pez("Globo", "Escamas", "Branquias", "Huevos", "Salada", "Herviboros");
	animals[1] = new Ave("Alcon", "Plumas", "Pulmonar", "Huevos", 150, "Diurna", false);
	animals[2] = new Ave("Buho", "Tiene plumas", "pulmonar", "oviparo", 60, "sedentarias", "Nocturna");
	animals[3] = new Anfibio("Rana","Pulmonar y cutanea", "Una capa de piel húmeda y permeable", "Huevos", "Anuros","Lagos", true);

	animals[0]->ToString();
	cout << endl;
	animals[1]->ToString();
	cout << endl;
	animals[2]->ToString();
	cout << endl;
	animals[3]->ToString();
	cout << endl;
	//cout << "   " << animal->getNombre();
	animals[3]->Morir();
	cout << endl << endl;

	Pez* dorado = new Pez("Dorado", "Escamas", "Branquias", "Huevos", "Salada", "Herviboros");
	Pez* globo = new Pez(*dorado);
	globo->ToString();
}

