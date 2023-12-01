#pragma once
#include "CelestialBody.h"
class Satelite : public CelestialBody {
public:
	string cuerpoPrincipal;
	Satelite();
	Satelite(string, double, double, double, double, double, double, double, double, string);
	~Satelite();
};

