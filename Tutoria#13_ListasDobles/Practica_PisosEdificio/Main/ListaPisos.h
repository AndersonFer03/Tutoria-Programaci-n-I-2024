#pragma once
#include "NodoPiso.h"
class ListaPisos {
private:
	NodoPiso* ini;

public:
	ListaPisos() { ini = NULL; }
	ListaPisos(NodoPiso* pIni);
	void setIni(NodoPiso* pIni);
	NodoPiso* getIni();
	void Insertar(ListaEmpleados* empleados);
	void MostrarPiso();
	void verifPisoRemovido(NodoPiso* aux);
	void CambiarPiso(int num);
	void Remover(NodoPiso* pPiso);
};
