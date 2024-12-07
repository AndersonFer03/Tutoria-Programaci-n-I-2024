#include "ListaPisos.h"
ListaPisos::ListaPisos(NodoPiso* pIni) { ini = pIni; }
void ListaPisos::setIni(NodoPiso* pIni) { ini = pIni; }
NodoPiso* ListaPisos::getIni() { return ini; }

void ListaPisos::Insertar(ListaEmpleados* empleados) {
	NodoPiso* nuevo;

	if (ini == NULL) {
		ini = new NodoPiso(empleados, 1);
	}
	else {
		NodoPiso* aux = ini;
		while (aux->getSig() != NULL) {
			aux = aux->getSig();
		}
		nuevo = new NodoPiso(empleados, aux->getNumPiso() + 1);

		aux->setSig(nuevo);
		nuevo->setAnt(aux);
	}
}
void ListaPisos::MostrarPiso() {

	NodoPiso* aux = ini;

	while (aux != NULL) {
		cout << "Piso: " << aux->getNumPiso() << endl;
		cout << "Total de ventas por piso: " << aux->getCantVentas() << endl;
		aux->getListaEmpleados()->MostrarEmpleados();
		aux = aux->getSig();
		cout << endl << endl;
	}
}
void ListaPisos::verifPisoRemovido(NodoPiso* aux)
{
	if (aux->getAnt() == NULL) {
		aux->getSig()->setAnt(NULL);
		ini = aux->getSig();
		aux->setSig(NULL);
		delete aux;

	}
	else {
		if (aux->getSig() == NULL) {
			aux->getAnt()->setSig(NULL);
			aux->setAnt(NULL);
			delete aux;
		}
		else {
			aux->getAnt()->setSig(aux->getSig());
			aux->getSig()->setAnt(aux->getAnt());
			aux->setAnt(NULL);
			aux->setSig(NULL);
			delete aux;
		}
	}
}
void ListaPisos::CambiarPiso(int num) {
	NodoPiso* aux = ini;
	bool bandera = false;
	while (aux != NULL && !bandera) {
		if (aux->getNumPiso() == num) {
			bandera = true;
		}
		else {
			aux = aux->getSig();
		}
	}
	if (bandera == false) {
		cout << "El numero de piso no fue encontrado" << endl;
	}
	else {
		Remover(aux);
		verifPisoRemovido(aux);
	}
}
void ListaPisos::Remover(NodoPiso* pPiso) {
	NodoPiso* pisoAux;
	if (pPiso->getAnt() == NULL) {
		pisoAux = pPiso->getSig();
	}
	else {
		pisoAux = pPiso->getAnt();
	}
	NodoEmpleado* auxEmp = pPiso->getListaEmpleados()->getIni();
	ListaVentas* ventaEmp;
	string nomEmp = "";
	while (auxEmp != NULL) {
		ventaEmp = auxEmp->getListaVentas();
		nomEmp = auxEmp->getNombre();
		pPiso->getListaEmpleados()->setIni(auxEmp->getSig());
		auxEmp->setSig(NULL);
		auxEmp = pPiso->getListaEmpleados()->getIni();
		pisoAux->getListaEmpleados()->InsertarOrdeEmp(ventaEmp, nomEmp);

	}
	pisoAux->calcularTotal();
	pPiso = pisoAux;
}