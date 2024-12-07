#pragma once
#include "ListaEmpleados.h"
class NodoPiso {
private:
	int cantVentas;
	int numPiso;
	NodoPiso* sig;
	NodoPiso* ant;
	ListaEmpleados* empleados;

public:
	NodoPiso() {}
	NodoPiso(ListaEmpleados* pEmpleados, int pNumPiso) {
		
		empleados = pEmpleados;
		numPiso = pNumPiso;
		calcularTotal();
		sig = NULL;
		ant = NULL;
	}
	void calcularTotal() {
		if (empleados != NULL) {
			NodoEmpleado* aux = new NodoEmpleado();
		    aux = empleados->getIni();
		    while (aux != NULL) {
			      cantVentas += aux->getTotal();
				  aux = aux->getSig();
		    }
		}
	}
	int getCantVentas() { return cantVentas; }
	void setCantVentas(int pCantVentas) { cantVentas = pCantVentas; }
	ListaEmpleados* getListaEmpleados() { return empleados; }
	void setListaEmpleados(ListaEmpleados* pEmpleados) { empleados = pEmpleados; }
	int getNumPiso() { return numPiso; }
	void setNombre(int pNumPiso) { numPiso = pNumPiso; }
	NodoPiso* getSig() { return sig; }
	void setSig(NodoPiso* pSig) { sig = pSig; }
	NodoPiso* getAnt() { return ant; }
	void setAnt(NodoPiso* pAnt) { ant = pAnt; }
};