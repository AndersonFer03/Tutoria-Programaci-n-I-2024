#include "Peces.h"
Pez::Pez(string pNombre, string pTipoPiel, string pRespiracion, string pFormaNacimiento, string pTipoAgua, string pAlimentacion) :VertebrateAnimals(pNombre, pTipoPiel, pRespiracion, pFormaNacimiento) {
	this->alimentacion = pAlimentacion;
	this->tipoAgua = pTipoAgua;
}
Pez::Pez(Pez& pez) :VertebrateAnimals(pez.getNombre(), pez.getTipoPiel(), pez.getRespiracion(), pez.getFormaNacimiento()) {
	this->tipoAgua = pez.getTipoAgua();
	this->alimentacion = pez.getAlimentacion();
}
void Pez::setTipoAgua(string pTipoAgua) {
	this->tipoAgua = pTipoAgua;
}
void Pez::setAlimentacion(string pAlimentacion) {
	this->alimentacion = pAlimentacion;
}
string Pez::getTipoAgua() {
	return tipoAgua;
}
string Pez::getAlimentacion() {
	return alimentacion;
}
void Pez::Nadar() {
	cout << "Yo nado por este tipo de agua " << tipoAgua<<endl;
}
void Pez::Nacer() {
	cout << "Saliendo de un huevo en el agua" << endl;
}
void Pez::ToString() {
	cout << "--- Pez ---" << endl;
	cout << "Nombre: " << getNombre() << endl;
	cout << "Tipo de Agua: " << tipoAgua << endl;
	cout << "Tipo de alimentacion: " << alimentacion << endl;
	cout << "Tipo de Piel: " << getTipoPiel() << endl;

}