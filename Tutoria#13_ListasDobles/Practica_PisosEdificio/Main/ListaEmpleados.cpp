#include "ListaEmpleados.h"
ListaEmpleados::ListaEmpleados() { ini = NULL; }
void ListaEmpleados::setIni(NodoEmpleado* pIni) { ini = pIni; }
NodoEmpleado* ListaEmpleados::getIni() { return ini; }

void ListaEmpleados::InsertarOrdeEmp(ListaVentas* ventas, string nombre) {
	NodoEmpleado* nuevo = new NodoEmpleado(nombre, ventas);
	if (ini == NULL) {
		ini = nuevo;
	}
	else {
		NodoEmpleado* aux = ini;
		bool bandera = false;
		if (ini->getNombre() > nombre) {
			cout << ini->getNombre();
			nuevo->setSig(aux);
			ini = nuevo;
			bandera = true;
		}
		else {
			while (aux->getSig() != NULL && !bandera) {
				if (aux->getSig()->getNombre() > nombre) {
					nuevo->setSig(aux->getSig());
					aux->setSig(nuevo);
					bandera = true;
				}
				else {
					aux = aux->getSig();
				}
			}
		}
		if (bandera == false) { aux->setSig(nuevo); }
	}
}
void ListaEmpleados::MostrarEmpleados() {
	NodoEmpleado* aux = ini;

	cout << "Empleados del piso: " << endl;
	while (aux != NULL) {
		cout << "Nombre del empleado: " << aux->getNombre() << endl;
		cout << "Total de ventas por empleado: " << aux->getTotal() << endl;
		aux->getListaVentas()->MostrarVentas();
		aux = aux->getSig();
		cout << "-------------------------------------" << endl;
	}


}