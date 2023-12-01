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

string Estrella::toString() {
	return "Estrella " + nombre + "(Masa: " + to_string(masa) + ", Radio: " + to_string(radio) + ", Posición(" + to_string(PosicionX) + ", " + to_string(PosicionY) + ", " + to_string(PosicionZ) + "), Velocidad(" + to_string(VelocidadX) + ", " + to_string(VelocidadY) + ", " + to_string(VelocidadZ) + "), Luminosidad: " + to_string(luminosidad) + ", Tipo Espectral:" + tipoEspectral + ")";
}
