#include "Satelite.h"

Satelite::Satelite()
{
}

Satelite::Satelite(string _nombre, double _masa, double _radio, double _PosicionX, double _PosicionY, double _PosicionZ, double _VelocidadX, double _VelocidadY, double _VelocidadZ, string _cuerpoPrincipal)
: CelestialBody(_nombre, _masa, _radio, _PosicionX, _PosicionY, _PosicionZ, _VelocidadX, _VelocidadY, VelocidadZ) {
	this->cuerpoPrincipal = _cuerpoPrincipal;
}

Satelite::~Satelite()
{
}

string Satelite::toString(){
	return "Satelite " + nombre + "(Masa: " + to_string(masa) + ", Radio: " + to_string(radio) + ", Posición(" + to_string(PosicionX) + ", " + to_string(PosicionY) + ", " + to_string(PosicionZ) + "), Velocidad(" + to_string(VelocidadX) + ", " + to_string(VelocidadY) + ", " + to_string(VelocidadZ) + "), Cuerpo Principal: " + cuerpoPrincipal + ")";
}
