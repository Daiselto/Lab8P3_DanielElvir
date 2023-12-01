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


