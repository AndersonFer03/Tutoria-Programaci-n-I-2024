#pragma once
#include "VertebrateAnimals.h"
class Pez : public VertebrateAnimals {
private:
	string tipoAgua;
	string alimentacion;
public:
	Pez() {}
	Pez(string pNombre, string pTipoPiel, string pRespiracion, string pFormaNacimiento, string pTipoAgua, string pAlimentacion);
	Pez(Pez& pez); 
	void setTipoAgua(string pTipoAgua);
	void setAlimentacion(string pAlimentacion);
	string getTipoAgua();
	string getAlimentacion();
	void Nadar();
	void Nacer();
	void ToString();
};
