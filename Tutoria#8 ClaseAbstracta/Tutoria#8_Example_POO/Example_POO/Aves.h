#pragma once
#include "VertebrateAnimals.h"
class Ave : public VertebrateAnimals {
private:
	int velocidad;
	string tiempoActivo;
	bool migratoria;
public:

	Ave(){}
	Ave(string pNombre, string pTipoPiel, string pRespiracion, string pFormaNacimiento, int pVelocidad, string pTiempoActivo, bool pMigratoria);
	void setVelocidad(int pVelocidad);
	void setTiempoActivo(string pTiempoActivo);
	void setMigratoria(bool pMigratoria);
	int getVelocidad();
	string getTiempoActivo();
	bool getMigratoria();
	void Volar();
	void Nacer();
	void ToString();
};