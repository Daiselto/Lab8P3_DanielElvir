#include "CelestialBody.h"

CelestialBody::CelestialBody() {
}

CelestialBody::CelestialBody(string _nombre, double _masa, double _radio, double _PosicionX, double _PosicionY, double _PosicionZ, double _VelocidadX, double _VelocidadY, double _VelocidadZ) {
	this->nombre = _nombre;
	this->masa = _masa;
	this->radio = _radio;
	this->PosicionX = _PosicionX;
	this->PosicionY = _PosicionY;
	this->PosicionZ = _PosicionZ;
	this->VelocidadX = _VelocidadX;
	this->VelocidadY = _VelocidadY;
	this->VelocidadZ = _VelocidadZ;
}

CelestialBody::~CelestialBody()
{
}

string CelestialBody::toString() {
	return	"Esto no we";
}


