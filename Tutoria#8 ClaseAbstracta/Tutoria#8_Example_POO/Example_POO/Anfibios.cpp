#include "Anfibios.h"
Anfibio::Anfibio(string pNombre, string pTipoPiel, string pRespiracion, string pFormaNacimiento, string pGrupEspecie, string pHabitat, bool pVeneno):VertebrateAnimals( pNombre, pTipoPiel, pRespiracion, pFormaNacimiento){
	this->grupEspecie=pGrupEspecie;
	this->habitat=pHabitat;
	this->veneno = pVeneno;
}
void Anfibio::setGrupEspecie(string pGrupEspecie) {
	this->grupEspecie = pGrupEspecie;
}
void Anfibio::setHabitat(string pHabitat) {
	this->habitat = pHabitat;
}
void Anfibio::setVeneno(bool pVeneno) {
	this->veneno = pVeneno;
}
string Anfibio::getGrupEspecie() {
	return grupEspecie;
}
string Anfibio::getHabitat() {
	return habitat;
}
bool Anfibio::getVeneno() {
	return veneno;
}
void Anfibio::Nacer() {
	cout << "Saliendo del huevo";
}
void Anfibio::ToString() {
	cout << "--- Anfibio ---" << endl;
	cout << "Nombre: " << getNombre()<<endl;
	cout << "Tipo Piel: " << getTipoPiel() << endl;
	cout << "Habitat: " << habitat<<endl;
	if (veneno) {
		cout << "Soy venenoso" << endl;
	}
	else {
		cout << "No soy venenoso" << endl;
	}

}