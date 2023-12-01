#include <iostream>
#include <locale>
#include <vector>
#include "CelestialBody.h"
#include "Planeta.h"
#include "Estrella.h"
#include "Satelite.h"
using namespace std;

static vector<CelestialBody*> cuerposCelestiales;

void agregarPlaneta() {
    string nombre;
    double masa;
    double radio;
    double PosicionX;
    double PosicionY;
    double PosicionZ;
    double VelocidadX;
    double VelocidadY;
    double VelocidadZ;
    string tipo;
    int validacion;
    bool presenciaAtmosfera;
    cout << "Ingrese el nombre del Planeta" << endl;
    cin >> nombre;
    cout << "Ingrese la masa del Planeta" << endl;
    cin >> masa;
    while (masa<10) {
        cout << "La masa tiene que tener un valor mayor de 10" << endl;
        cout << "Ingrese la masa del Planeta" << endl;
        cin >> masa;
    }
    cout << "Ingrese el radio del planeta" << endl;
    cin >> radio;
    while (radio < 10) {
        cout << "El radio tiene que tener un valor mayor de 10" << endl;
        cout << "Ingrese el radio del Planeta" << endl;
        cin >> radio;
    }
    cout << "Ingrese la Posicion X del Planeta" << endl;
    cin >> PosicionX;
    while (PosicionX<=0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion X del Planeta" << endl;
        cin >> PosicionX;
    }
    cout << "Ingrese la Posicion Y del Planeta" << endl;
    cin >> PosicionY;
    while (PosicionY <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion Y del Planeta" << endl;
        cin >> PosicionY;
    }
    cout << "Ingrese la Posicion Z del Planeta" << endl;
    cin >> PosicionZ;
    while (PosicionZ <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion Z del Planeta" << endl;
        cin >> PosicionZ;
    }
    cout << "Ingrese la Velocidad X del Planeta" << endl;
    cin >> VelocidadX;
    while (VelocidadX <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad X del Planeta" << endl;
        cin >> VelocidadX;
    }
    cout << "Ingrese la Velocidad Y del Planeta" << endl;
    cin >> VelocidadY;
    while (VelocidadY <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad Y del Planeta" << endl;
        cin >> VelocidadY;
    }
    cout << "Ingrese la Velocidad Z del Planeta" << endl;
    cin >> VelocidadZ;
    while (VelocidadZ <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad Z del Planeta" << endl;
        cin >> VelocidadZ;
    }
    cout << "Ingrese que tipo de planeta es (puede ser rocoso o gaseoso)" << endl;
    cin >> tipo;
    while (tipo!="gaseoso" && tipo!="rocoso" && tipo != "Gasesoso" && tipo!= "Rocoso") {
        cout << "El tipo tiene que ser rocoso o gaseoso" << endl; cout << "Ingrese que tipo de planeta es (puede ser rocoso o gaseoso)" << endl;
        cin >> tipo;
    }
    cout << "El planeta tiene atmosfera? (Ingrese 1 para verdadero y 0 para falso)" << endl;
    cin >> validacion;
    while (validacion<0||validacion>1) {
        cout << "Tiene que ser un valor entre 0 y 1" << endl;
        cout << "El planeta tiene atmosfera? (Ingrese 1 para verdadero y 0 para falso)" << endl;
        cin >> validacion;
    }

    presenciaAtmosfera = validacion;

    CelestialBody* plan = new Planeta(nombre, masa, radio, PosicionX, PosicionY, PosicionZ, VelocidadX, VelocidadY, VelocidadZ, tipo, presenciaAtmosfera);
    cuerposCelestiales.push_back(plan);
    cout << endl;
    cout << "Planeta " << nombre << " agregado exitosamente" << endl;
    cout << endl;
}

void agregarEstrella() {
    string nombre;
    double masa;
    double radio;
    double PosicionX;
    double PosicionY;
    double PosicionZ;
    double VelocidadX;
    double VelocidadY;
    double VelocidadZ;
    double Luminosidad;
    string TipoEspectral;
    cout << "Ingrese el nombre de la estrella" << endl;
    cin >> nombre;
    cout << "Ingrese la masa de la estrella" << endl;
    cin >> masa;
    while (masa < 10) {
        cout << "La masa tiene que tener un valor mayor de 10" << endl;
        cout << "Ingrese la masa de la estrella" << endl;
        cin >> masa;
    }
    cout << "Ingrese el radio de la estrella" << endl;
    cin >> radio;
    while (radio < 10) {
        cout << "El radio tiene que tener un valor mayor de 10" << endl;
        cout << "Ingrese el radio de la estrella" << endl;
        cin >> radio;
    }
    cout << "Ingrese la Posicion X de la estrella" << endl;
    cin >> PosicionX;
    while (PosicionX <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion X de la estrella" << endl;
        cin >> PosicionX;
    }
    cout << "Ingrese la Posicion Y de la estrella" << endl;
    cin >> PosicionY;
    while (PosicionY <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion Y de la estrella" << endl;
        cin >> PosicionY;
    }
    cout << "Ingrese la Posicion Z de la estrella" << endl;
    cin >> PosicionZ;
    while (PosicionZ <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion Z de la estrella" << endl;
        cin >> PosicionZ;
    }
    cout << "Ingrese la Velocidad X de la estrella" << endl;
    cin >> VelocidadX;
    while (VelocidadX <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad X de la estrella" << endl;
        cin >> VelocidadX;
    }
    cout << "Ingrese la Velocidad Y de la estrella" << endl;
    cin >> VelocidadY;
    while (VelocidadY <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad Y de la estrella" << endl;
        cin >> VelocidadY;
    }
    cout << "Ingrese la Velocidad Z de la estrella" << endl;
    cin >> VelocidadZ;
    while (VelocidadZ <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad Z de la estrella" << endl;
        cin >> VelocidadZ;
    }
    cout << "Ingrese la luminosidad de la estrella" << endl;
    cin >> Luminosidad;
    while (Luminosidad<=0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la luminosidad" << endl;
        cin >> Luminosidad;
    }
    cout << "Ingrese el Tipo Espectral de la estrella" << endl;
    cin >> TipoEspectral;

    CelestialBody* estre = new Estrella(nombre, masa, radio, PosicionX, PosicionY, PosicionZ, VelocidadX, VelocidadY, VelocidadZ, Luminosidad, TipoEspectral);
    cuerposCelestiales.push_back(estre);
    cout << endl;
    cout << "Estrella " << nombre << " agregado exitosamente" << endl;
    cout << endl;
}

void agregarSatelite() {
    string nombre;
    double masa;
    double radio;
    double PosicionX;
    double PosicionY;
    double PosicionZ;
    double VelocidadX;
    double VelocidadY;
    double VelocidadZ;
    string CuerpoPrincipal;

    cout << "Ingrese el nombre del Satelite" << endl;
    cin >> nombre;
    cout << "Ingrese la masa del Satelite" << endl;
    cin >> masa;
    while (masa < 10) {
        cout << "La masa tiene que tener un valor mayor de 10" << endl;
        cout << "Ingrese la masa del Satelite" << endl;
        cin >> masa;
    }
    cout << "Ingrese el radio del Satelite" << endl;
    cin >> radio;
    while (radio < 10) {
        cout << "El radio tiene que tener un valor mayor de 10" << endl;
        cout << "Ingrese el radio del Satelite" << endl;
        cin >> radio;
    }
    cout << "Ingrese la Posicion X del Satelite" << endl;
    cin >> PosicionX;
    while (PosicionX <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion X del Satelite" << endl;
        cin >> PosicionX;
    }
    cout << "Ingrese la Posicion Y del Satelite" << endl;
    cin >> PosicionY;
    while (PosicionY <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion Y del Satelite" << endl;
        cin >> PosicionY;
    }
    cout << "Ingrese la Posicion Z del Satelite" << endl;
    cin >> PosicionZ;
    while (PosicionZ <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Posicion Z del Satelite" << endl;
        cin >> PosicionZ;
    }
    cout << "Ingrese la Velocidad X del Satelite" << endl;
    cin >> VelocidadX;
    while (VelocidadX <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad X del Satelite" << endl;
        cin >> VelocidadX;
    }
    cout << "Ingrese la Velocidad Y del Satelite" << endl;
    cin >> VelocidadY;
    while (VelocidadY <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad Y del Satelite" << endl;
        cin >> VelocidadY;
    }
    cout << "Ingrese la Velocidad Z del Satelite" << endl;
    cin >> VelocidadZ;
    while (VelocidadZ <= 0) {
        cout << "Tiene que ser un numero positivo diferente de 0" << endl;
        cout << "Ingrese la Velocidad Z del Satelite" << endl;
        cin >> VelocidadZ;
    }

    cout << "Ingrese el nombre del cuerpo celestial más cercano" << endl;
    cin >> CuerpoPrincipal;

    CelestialBody* sat = new Satelite(nombre, masa, radio, PosicionX, PosicionY, PosicionZ, VelocidadX, VelocidadY, VelocidadZ, CuerpoPrincipal);
    cuerposCelestiales.push_back(sat);

    cout << endl;
    cout << "Satelite " << nombre << " agregado exitosamente" << endl;
    cout << endl;
}

void agregarCP() {
    int opcion2;
    cout << "Bienvenido a la opcion de agregar un Cuerpo celeste" << endl;
    cout << "Digame cual es el cuerpo celeste que desea hacer" << endl;
    cout << "1. Planeta" << endl;
    cout << "2. Estrella" << endl;
    cout << "3. Satélite" << endl;
    cout << "Ingrese una opción valida" << endl;
    cin >> opcion2;
    switch (opcion2)
    {
    case 1:
        agregarPlaneta();
        break;
    case 2:
        agregarEstrella();
        break;
    case 3:
        agregarSatelite();
        break;
    default:
        break;
    }
}

void listarCuerpos() {
    if (cuerposCelestiales.size()<0) {
        cout << "Tiene que ingresar un cuerpo primero" << endl;        
    }
    else {
        int cont = 0;
        for (CelestialBody* wows : cuerposCelestiales) {
            Planeta* tempPlaneta = dynamic_cast<Planeta*>(wows);
            Estrella* tempEstrella = dynamic_cast<Estrella*>(wows);
            Satelite* tempSatelite = dynamic_cast<Satelite*>(wows);
            if (tempPlaneta!=nullptr) {
                cout << ++cont << "- ";
                cout << tempPlaneta->toString() << endl;
            }
            if (tempEstrella != nullptr) {
                cout << ++cont << "- ";
                cout << tempEstrella->toString() << endl;
            }
            if (tempSatelite != nullptr) {
                cout << ++cont << "- ";
                cout << tempSatelite->toString() << endl;
            }
        }
    }
}

void eliminarCuerpos() {

}

void fusionarCuerpos() {

}

void compararHabitabilidad() {

}

void compararCuerpos() {

}

void menu() {
    bool seguir = true;
    int opcion;
    do {
        cout << "---- SISTEMA SOLAR - MENÚ ----" << endl;
        cout << "1. Agregar cuerpo celeste" << endl;
        cout << "2. Listar cuerpos celestes" << endl;
        cout << "3. Eliminar cuerpos celestes" << endl;
        cout << "4. Fusionar cuerpos celestes" << endl;
        cout << "5. Comparar habitabilidad" << endl;
        cout << "6. Comparar cuerpos celestes" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción valida" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            agregarCP();
            break;
        case 2:
            listarCuerpos();
            break;
        case 3:
            eliminarCuerpos();
            break;
        case 4:
            fusionarCuerpos();
            break;
        case 5:
            compararHabitabilidad();
            break;
        case 6:
            compararCuerpos();
            break;
        case 7:
            cout << "Gracias por usar el programa" << endl;
            cout << "Saliendo....." << endl;
            cout << endl;
            seguir = false;
            break;
        default:
            cout << "ERROR!" << endl;
            cout << "NO INGRESÓ UNA DE LAS OPCIONES VALIDAS" << endl;
            cout << endl;
            break;
        }
    } while (seguir);
    
}

int main() {
    setlocale(LC_ALL, "spanish");
    menu();
}
