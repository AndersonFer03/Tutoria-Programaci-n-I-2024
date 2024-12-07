#pragma once
#include<iostream>
using namespace std;
class NodoVentas {
private:
	NodoVentas* sig;
	int venta;
public:
	NodoVentas() { }
	NodoVentas(int pVenta) { venta = pVenta; sig = NULL; }
	NodoVentas* getSig() { return sig; }
	void setSig(NodoVentas* pSig) { sig = pSig; }
	int getVentas() {
		return venta;
	}
	void setVentas(int pVenta) {
		venta = pVenta;
	}


};
