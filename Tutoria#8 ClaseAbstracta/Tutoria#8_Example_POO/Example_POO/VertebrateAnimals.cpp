
#include "VertebrateAnimals.h"
VertebrateAnimals::VertebrateAnimals(string pNombre,string pTipoPiel, string pRespiracion, string pFormaNacimiento)
: nombre(pNombre), tipoPiel(pTipoPiel), respiracion(pRespiracion), formaNacimiento(pFormaNacimiento){
}
void VertebrateAnimals::setNombre(string pNombre) {
    this->nombre = pNombre;
}
void VertebrateAnimals::setTipoPiel(string pTipoPiel) {
    this->tipoPiel = pTipoPiel;
}
void VertebrateAnimals::setRespiracion(string pRespiracion) {
    this->respiracion = pRespiracion;
}
void VertebrateAnimals::setFormaNacimiento(string pFormaNacimiento) {
    this->formaNacimiento = pFormaNacimiento;
}
string VertebrateAnimals::getNombre() {
    return nombre;
}

string VertebrateAnimals::getTipoPiel() {
    return tipoPiel;
}

string VertebrateAnimals::getRespiracion() {
    return respiracion;
}

string VertebrateAnimals::getFormaNacimiento() {
    return formaNacimiento;
}
void VertebrateAnimals::Morir() {

    cout << "He muerto, cumpliendo mi ciclo de vida";
}

void VertebrateAnimals::Reproducirse() {
    cout << "Epoca de reproduccion de mi especie" << endl;
}