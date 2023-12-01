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

CelestialBody* CelestialBody::operator+(const CelestialBody* planeta2) {
	CelestialBody* fusionado = new CelestialBody();	
	fusionado->masa = this->masa + planeta2->masa;
	fusionado->radio = this->radio + planeta2->radio;
	fusionado->PosicionX = (this->PosicionX + planeta2->PosicionX)/2;
	fusionado->PosicionY = (this->PosicionY + planeta2->PosicionY)/2;
	fusionado->PosicionZ = (this->PosicionZ + planeta2->PosicionZ)/2;
	fusionado->VelocidadX = (this->VelocidadX + planeta2->VelocidadX)/2;
	fusionado->VelocidadY = (this->VelocidadY + planeta2->VelocidadY)/2;
	fusionado->VelocidadZ = (this->VelocidadZ + planeta2->VelocidadZ)/2;

	return fusionado;
}




