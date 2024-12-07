#include "Aves.h"
Ave::Ave(string pNombre, string pTipoPiel, string pRespiracion, string pFormaNacimiento, int pVelocidad, string pTiempoActivo, bool pMigratoria):VertebrateAnimals(pNombre, pTipoPiel, pRespiracion, pFormaNacimiento) 
{
	this->migratoria = pMigratoria;
	this->tiempoActivo = pTiempoActivo;
	this->velocidad = pVelocidad;
}
void Ave::setVelocidad(int pVelocidad) {
	this->velocidad = pVelocidad;
}
void Ave::setTiempoActivo(string pTiempoActivo) {
	this->tiempoActivo = pTiempoActivo;
}
void Ave::setMigratoria(bool pMigratoria) {
	this->migratoria = pMigratoria;
}
int Ave::getVelocidad() {
	return velocidad;
}
string Ave::getTiempoActivo() {
	return tiempoActivo;
}
bool Ave::getMigratoria() {
	return migratoria;
}
void Ave::Volar() {
	cout << "Yo vuelo a esta velocidad " << velocidad <<"km/h" << endl;
}
void Ave::Nacer() {
	cout << "Saliendo del huevo " << endl;
}
void Ave::ToString() {
	cout << "--- Ave ---" << endl;
	cout << "Nombre: " << getNombre() << endl;
	cout << "Velocidad: " << velocidad << " km/h \n";
	cout << "Respiración: " << getRespiracion() << endl;
	if (migratoria) {
		cout << "Soy un ave que me desplazo cada año" << endl;
	}
	else {
		cout << "Soy un ave que me quedo en un solo lugar" << endl;
	}
}