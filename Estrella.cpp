#include "Estrella.h"

Estrella::Estrella() {

}

Estrella::Estrella(string _nombre, double _masa, double _radio, double _PosicionX, double _PosicionY, double _PosicionZ, double _VelocidadX, double _VelocidadY, double _VelocidadZ, double _luminosidad, string _tipoEspectral) 
 : CelestialBody(_nombre, _masa, _radio, _PosicionX, _PosicionY, _PosicionZ, _VelocidadX, _VelocidadY, VelocidadZ) {
	this->luminosidad = _luminosidad;
	this->tipoEspectral = _tipoEspectral;
}

Estrella::~Estrella()
{
}

