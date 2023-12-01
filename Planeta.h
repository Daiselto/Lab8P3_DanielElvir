#pragma once
#include "CelestialBody.h"
class Planeta : public CelestialBody {
public:
	string tipo;
	bool presenciaAtmosfera;
	Planeta();
	Planeta(string, double, double, double, double, double, double, double, double, string, bool);
	~Planeta();
	string toString();
};

