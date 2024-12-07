#pragma once
#include "NodoVentas.h"
class ListaVentas {
private:
	NodoVentas* ini;
public:
	ListaVentas(){}
	ListaVentas(NodoVentas* pIni);
	void setIni(NodoVentas* pIni);
	NodoVentas* getIni();
	void InsertarOrdeEmp(int venta);
	void MostrarVentas();

};
