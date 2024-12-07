#include "ListaVentas.h"
ListaVentas::ListaVentas(NodoVentas* pIni) {
	ini = pIni; 
}
void ListaVentas::setIni(NodoVentas* pIni){
	ini = pIni; 
}
NodoVentas* ListaVentas::getIni() {
	return ini; 
}
void ListaVentas::InsertarOrdeEmp(int venta) {
	if (ini == NULL) {
		ini = new NodoVentas(venta);
	}
	else {
		NodoVentas* aux = ini;
		bool bandera = false;
		if (ini->getVentas() > venta) {
			bandera = true;
		}
		else {
			while (aux->getSig() != NULL && !bandera) {
				if (aux->getSig()->getVentas() > venta) {
					bandera = true;
				}
				else {
					aux = aux->getSig();
				}
			}
		}
		NodoVentas* nuevo = new NodoVentas(venta);
		if (bandera == true && aux == ini) {
			nuevo->setSig(aux);
			ini = nuevo;
		}
		else {
			if (bandera == true) {
				nuevo->setSig(aux);
				aux->setSig(nuevo);
			}
			else {
				aux->setSig(nuevo);
			}
		}
	}
}
void ListaVentas::MostrarVentas() {
	NodoVentas* aux = ini;
	int i = 0;
	while (aux != NULL) {
		cout << "Venta " << i << ": " << aux->getVentas() << endl;
		aux = aux->getSig();
		i++;
	}
}