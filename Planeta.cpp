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

bool Planeta::operator>(const Planeta* otro) {
	if ((this->presenciaAtmosfera==true) && (otro->presenciaAtmosfera==false)) {
		return true;
	} 
	if ((this->presenciaAtmosfera == false) && (otro->presenciaAtmosfera == true)) {
		return false;
	} 

	if ((this->presenciaAtmosfera == false && otro->presenciaAtmosfera == false) || (this->presenciaAtmosfera == true && otro->presenciaAtmosfera == true)) {
		if ((this->tipo == "Rocoso") && (otro->tipo=="Gaseoso")) {
			return true;
		}
		else if ((this->tipo == "Gaseoso") && (otro->tipo == "Rocoso")) {
			return false;
		} else if ((this->tipo == "Gaseoso" && otro->tipo == "Gaseoso")||(this->tipo == "Rocoso" && otro->tipo == "Rocoso")) {
			return false;
		}
	}
	
}



