#pragma once
#include "ListaVentas.h"
class NodoEmpleado {
private:
	int totalVentas;
	string nombre;
	ListaVentas* ventas;
	NodoEmpleado* sig;
public:
	NodoEmpleado(){}
	NodoEmpleado(string pNombre, ListaVentas* pVentas) {
		nombre = pNombre;
		ventas = pVentas;
		calcularVentas();
		sig = NULL;
	}
	void calcularVentas(){
		if (ventas != NULL) {
			NodoVentas* aux = new NodoVentas();
			aux = ventas->getIni();
			while (aux != NULL) {
				totalVentas += aux->getVentas();
				aux = aux->getSig();
			}
		}
	}
	int getTotal() { return totalVentas; }
	void setTotalVentas(int pTotal) { totalVentas = pTotal; }
	ListaVentas* getListaVentas() { return ventas; }
	void setListaVentas(ListaVentas* pVentas) { ventas = pVentas; }
	string getNombre() { return nombre; }
	void setNombre(string pNombre) { nombre = pNombre; }
	NodoEmpleado* getSig() { return sig; }
	void setSig(NodoEmpleado* pSig) { sig = pSig; }
};
