#include "Planeta.h"

Planeta::Planeta() {
}

Planeta::Planeta(string _nombre, double _masa, double _radio, double _PosicionX, double _PosicionY, double _PosicionZ, double _VelocidadX, double _VelocidadY, double _VelocidadZ, string _tipo, bool _presenciaAtmosfera)
				: CelestialBody(_nombre, _masa, _radio, _PosicionX, _PosicionY, _PosicionZ, _VelocidadX, _VelocidadY, VelocidadZ) {
	this->tipo = _tipo;
	this->presenciaAtmosfera = _presenciaAtmosfera;
}

Planeta::~Planeta() {
	
}

string Planeta::toString() {
	return "Planeta " + nombre + "(Masa: " + to_string(masa) + ", Radio: " + to_string(radio) + ", Posición(" + to_string(PosicionX) + ", " + to_string(PosicionY) + ", " + to_string(PosicionZ)+"), Velocidad(" + to_string(VelocidadX) + ", " + to_string(VelocidadY) + ", " + to_string(VelocidadZ) + "), Tipo: " + tipo + ", Atmosfera:" + to_string(presenciaAtmosfera)+")";
}


