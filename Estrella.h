#pragma once
#include "CelestialBody.h"
class Estrella : public CelestialBody {
public:
	double luminosidad;
	string tipoEspectral;
	Estrella();
	Estrella(string, double, double, double, double, double, double, double, double, double, string);
	~Estrella();
};

