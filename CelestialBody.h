#pragma once
#include <string>
using namespace std;
class CelestialBody {
public:
	string nombre;
	double masa;
	double radio;
	double PosicionX;
	double PosicionY;
	double PosicionZ;
	double VelocidadX;
	double VelocidadY;
	double VelocidadZ;
	CelestialBody();
	CelestialBody(string, double, double, double, double, double, double, double, double);
	~CelestialBody();
};

