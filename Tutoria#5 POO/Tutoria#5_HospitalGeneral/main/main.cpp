
#include <iostream>
#include "patient.h"
#include "geriatrics.h"
#include "general_medicine.h"
#include "pediatrics.h"

void printPatients(Patient** patients, int size) {
	for(int i = 0; i < size; i++) {
		cout<<patients[i][0].toString();
		cout << "\n";
	}
}
int main()
{
	Patient* patients[3];
	patients[0] = new Geriatrics(80,12939404, "Carlos", "87679854","ICE");
	patients[1] = new GeneralMedicine(30, 234567865, "Maria", "67894356", "Secretaria", "Lucia", false);
	//patients[2] = new Pediatrics(8, 123245677, "Mario", "0", "Luis", "65789");

	cout << "---Pacientes: ---\n";
	printPatients(patients, 2);
}

