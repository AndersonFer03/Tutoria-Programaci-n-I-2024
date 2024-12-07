#pragma once
#include "VertebrateAnimals.h"

class Anfibio : public VertebrateAnimals {
private:
	string grupEspecie;
	string habitat;
	bool veneno;
public:
	Anfibio(){}
	Anfibio(string pNombre, string pTipoPiel, string pRespiracion, string pFormaNacimiento,string pGrupEspecie, string pHabitat,bool pVeneno);
	void setGrupEspecie(string pGrupEspecie);
	void setHabitat(string pHabitat);
	void setVeneno(bool pVeneno);
	string getGrupEspecie();
	string getHabitat();
	bool getVeneno();
	void Nacer();
	void ToString();
};
