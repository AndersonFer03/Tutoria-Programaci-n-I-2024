#pragma once
#include <iostream>
using namespace std;
class  VertebrateAnimals {
private:
    string nombre;
    string tipoPiel;
    string respiracion;
    string formaNacimiento;
public:
    VertebrateAnimals(){}
    VertebrateAnimals(string pNombre, string pTipoPiel, string pRespiracion, string pFormaNacimiento);

    void setNombre(string pNombre);
    void setTipoPiel(string pTipoPiel);
    void setRespiracion(string pRespiracion);
    void setFormaNacimiento(string pFormaNacimiento);
    string getNombre();
    string getTipoPiel();
    string getRespiracion();
    string getFormaNacimiento();
    void Morir();
    void Reproducirse();
    virtual void Nacer()=0;
    virtual void ToString()=0;



};