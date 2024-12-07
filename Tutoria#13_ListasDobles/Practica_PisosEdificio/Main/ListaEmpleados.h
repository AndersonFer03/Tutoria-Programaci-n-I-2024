#pragma once
#include "NodoEmpleado.h"
class ListaEmpleados {
private:
	NodoEmpleado* ini;

public:
	ListaEmpleados();
	void setIni(NodoEmpleado* pIni);
	NodoEmpleado* getIni();

	void InsertarOrdeEmp(ListaVentas* ventas, string nombre);
	void MostrarEmpleados();

};