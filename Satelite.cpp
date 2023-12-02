#include "Satelite.h"

Satelite::Satelite()
{
}

Satelite::Satelite(string _nombre, double _masa, double _radio, double _PosicionX, double _PosicionY, double _PosicionZ, double _VelocidadX, double _VelocidadY, double _VelocidadZ, string _cuerpoPrincipal)
: CelestialBody(_nombre, _masa, _radio, _PosicionX, _PosicionY, _PosicionZ, _VelocidadX, _VelocidadY, _VelocidadZ) {
	this->cuerpoPrincipal = _cuerpoPrincipal;
}

Satelite::~Satelite(){
}

