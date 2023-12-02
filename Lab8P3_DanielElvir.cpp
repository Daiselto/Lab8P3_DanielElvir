#include <iostream>
#include <locale>
#include <vector>
#include "CelestialBody.h"
#include "Planeta.h"
#include "Estrella.h"
#include "Satelite.h"
using namespace std;

static vector<CelestialBody*> cuerposCelestiales;
static CelestialBody* plan;
static CelestialBody* estre;
static CelestialBody* sat;


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
    bool presenciaAtmosfera=true;
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
    int tipoOpcion;
    cout << "Ingrese que tipo de planeta es " << endl;
    cout << "1. Rocoso" << endl;
    cout << "2. Gasesoso" << endl;
    cout << "Ingrese una opcion valida" << endl;
    cin >> tipoOpcion;
    while (tipoOpcion<1||tipoOpcion>2) {
        cout << "Ingrese una opcion valida" << endl;
        cout << "Ingrese que tipo de planeta es " << endl;
        cout << "1. Rocoso" << endl;
        cout << "2. Gasesoso" << endl;
        cout << "Ingrese una opcion valida" << endl;
        cin >> tipoOpcion;
    }

    switch (tipoOpcion) {
    case 1:
        tipo = "Rocoso";
        break;
    case 2:
        tipo = "Gaseoso";
        break;
    default:
        break;
    }    
    cout << "El planeta tiene atmosfera? (Ingrese 1 para verdadero y 0 para falso)" << endl;
    cout << "1. Si tiene" << endl;
    cout << "2. No tiene" << endl;
    cout << "Ingrese una opcion valida" << endl;
    cin >> validacion;
    while (validacion<1||validacion>2) {
        cout << "Tiene que ser un valor entre 0 y 1" << endl;
        cout << "El planeta tiene atmosfera? (Ingrese 1 para verdadero y 0 para falso)" << endl;
        cin >> validacion;
    }

    switch (validacion)
    {
    case 1:
        presenciaAtmosfera = true;
        break;
    case 2:
        presenciaAtmosfera = false;
        break;
    default:
        break;
    }

    plan = new Planeta(nombre, masa, radio, PosicionX, PosicionY, PosicionZ, VelocidadX, VelocidadY, VelocidadZ, tipo, presenciaAtmosfera);
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

    estre = new Estrella(nombre, masa, radio, PosicionX, PosicionY, PosicionZ, VelocidadX, VelocidadY, VelocidadZ, Luminosidad, TipoEspectral);
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

    sat = new Satelite(nombre, masa, radio, PosicionX, PosicionY, PosicionZ, VelocidadX, VelocidadY, VelocidadZ, CuerpoPrincipal);
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
    if (cuerposCelestiales.size()>0) {
           
        int cont = 0;
        for (CelestialBody* wows : cuerposCelestiales) {
            Planeta* tempPlaneta = dynamic_cast<Planeta*>(wows);
            Estrella* tempEstrella = dynamic_cast<Estrella*>(wows);
            Satelite* tempSatelite = dynamic_cast<Satelite*>(wows);
            if (tempPlaneta != nullptr) {
                cout << ++cont << "- ";
                cout << "Planeta " << tempPlaneta->nombre << "(Masa: " << tempPlaneta->masa << ", Radio: " << tempPlaneta->radio << ", Posición(" << tempPlaneta->PosicionX << ", " << tempPlaneta->PosicionY << ", " << tempPlaneta->PosicionZ << "), Velocidad(" << tempPlaneta->VelocidadX << ", " << tempPlaneta->VelocidadY << ", " << tempPlaneta->VelocidadZ << "), Tipo: " << tempPlaneta->tipo << ", Atmosfera:"  << tempPlaneta->presenciaAtmosfera << ")" << endl;
            }else
            if (tempEstrella != nullptr) {
                cout << ++cont << "- ";
                cout << "Estrella " << tempEstrella->nombre << "(Masa: " << tempEstrella->masa << ", Radio: " << tempEstrella->radio << ", Posición(" << tempEstrella->PosicionX << ", " << tempEstrella->PosicionY << ", " << tempEstrella->PosicionZ << "), Velocidad(" << tempEstrella->VelocidadX << ", " << tempEstrella->VelocidadY << ", " << tempEstrella->VelocidadZ << "), Luminosidad: " << tempEstrella->luminosidad << ", Tipo Espectral:" << tempEstrella->tipoEspectral << ")" << endl;
            }else
            if (tempSatelite != nullptr) {
                cout << ++cont << "- ";
                cout << "Satelite " << tempSatelite->nombre << "(Masa: " << tempSatelite->masa << ", Radio: " << tempSatelite->radio << ", Posición(" << tempSatelite->PosicionX << ", " << tempSatelite->PosicionY << ", " << tempSatelite->PosicionZ << "), Velocidad(" << tempSatelite->VelocidadX << ", " << tempSatelite->VelocidadY << ", " << tempSatelite->VelocidadZ << "), Cuerpo Principal: " << tempSatelite->cuerpoPrincipal << ")" << endl;
            }
            else {
                cout << ++cont << "- ";
                cout << wows->nombre << "(Masa: " << wows->masa << ", Radio: " << wows->radio << ", Posición(" << wows->PosicionX << ", " << wows->PosicionY << ", " << wows->PosicionZ << "), Velocidad(" << wows->VelocidadX << ", " << wows->VelocidadY << ", " << wows->VelocidadZ << "))" << endl;
            }
        }
    }
    else {
        cout << "Tiene que ingresar un cuerpo primero" << endl;
    }
}

void eliminarCuerpos() {
    if (cuerposCelestiales.size()>0) {
        listarCuerpos();
        int indice;
        cout << "Ingrese el cuerpo que desea eliminar" << endl;
        cin >> indice;
        int nIndice = indice - 1;
        if (nIndice >= 0 && nIndice < cuerposCelestiales.size()) {
            delete cuerposCelestiales[nIndice];
            cuerposCelestiales.erase(cuerposCelestiales.begin() + nIndice);
            cout << endl;
            cout << "Eliminado exitosamente" << endl;
            cout << endl;
        }
        else {
            cout << "No pasó nada" << endl;
        }
    }
    else {
        cout << "Tiene que ingresar un cuerpo primero para eliminar" << endl;
    }
}

void fusionarCuerpos() {
    if (cuerposCelestiales.size()>1) {
        listarCuerpos();
        int indice1;
        int indice2;
        cout << "Cuerpo 1 a fusionar: ";
        cin >> indice1;
        cout << "Cuerpo 2 a fusionar: ";
        cin >> indice2;
        string nNombre;
        cout << "Ingrese el nombre del cuerpo principal: ";
        cin >> nNombre;
        CelestialBody* c1 = cuerposCelestiales[indice1 - 1];
        CelestialBody* c2 = cuerposCelestiales[indice2 - 1];
        CelestialBody* c3 = *c1 + c2;

        cout << "Resultados de la fusion:" << endl;
        c3->nombre = nNombre;
        cout << c3->nombre + " (Masa: " + to_string(c3->masa) + ", Radio: " + to_string(c3->radio) + ", Posición(" + to_string(c3->PosicionX) + ", " + to_string(c3->PosicionY) + ", " + to_string(c3->PosicionZ) + "), Velocidad(" + to_string(c3->VelocidadX) + ", " + to_string(c3->VelocidadY) + ", " + to_string(c3->VelocidadZ) + "))" << endl;
        if ((indice1-1)>(indice2-1)) {
            cuerposCelestiales.push_back(c3);

            delete cuerposCelestiales[indice1 - 1];
            cuerposCelestiales.erase(cuerposCelestiales.begin() + (indice1 - 1));
            delete cuerposCelestiales[indice2 - 1];
            cuerposCelestiales.erase(cuerposCelestiales.begin() + (indice2 - 1));
        }
        else if ((indice2 - 1) > (indice1 - 1)) {
            cuerposCelestiales.push_back(c3);

            delete cuerposCelestiales[indice2 - 1];
            cuerposCelestiales.erase(cuerposCelestiales.begin() + (indice2 - 1));
            delete cuerposCelestiales[indice1 - 1];
            cuerposCelestiales.erase(cuerposCelestiales.begin() + (indice1 - 1));
        }
        
        cout << "Lista actualizada de cuerpos celestes:" << endl;
        listarCuerpos();


    }
    else {
        cout << "Tiene que ingresar 2 cuerpos para fusionarlos" << endl;
    }
}

void compararHabitabilidad() {
    if (cuerposCelestiales.size() > 1) {
        int indice1, indice2;
        cout << "Seleccione dos planetas" << endl;
        cout << endl;
        int cont = 0;
        for (CelestialBody* wows : cuerposCelestiales) {
            Planeta* tempPlaneta = dynamic_cast<Planeta*>(wows);
            Estrella* tempEstrella = dynamic_cast<Estrella*>(wows);
            Satelite* tempSatelite = dynamic_cast<Satelite*>(wows);
            if (tempPlaneta != nullptr) {
                cout << ++cont << "- ";
                cout << "Planeta " << tempPlaneta->nombre << "(Masa: " << tempPlaneta->masa << ", Radio: " << tempPlaneta->radio << ", Posición(" << tempPlaneta->PosicionX << ", " << tempPlaneta->PosicionY << ", " << tempPlaneta->PosicionZ << "), Velocidad(" << tempPlaneta->VelocidadX << ", " << tempPlaneta->VelocidadY << ", " << tempPlaneta->VelocidadZ << "), Tipo: " << tempPlaneta->tipo << ", Atmosfera:" << tempPlaneta->presenciaAtmosfera << ")" << endl;
            } else if (tempEstrella != nullptr) {
                cout << ++cont;
            } else if (tempSatelite != nullptr) {
                cout << ++cont;
            } else {
                cout << ++cont;
            }
        }
        cout << endl;
        cout << "Cuerpo 1:";
        cin >> indice1;
        cout << "Cuerpo 2:";
        cin >> indice2;       
        if (cuerposCelestiales[indice1 - 1] > cuerposCelestiales[indice2 - 1]) {
            cout << "Planeta " << cuerposCelestiales[indice2 - 1]->nombre << " es más habitable que Planeta " << cuerposCelestiales[indice1 - 1]->nombre << endl;
        } else {
            cout << "Planeta " << cuerposCelestiales[indice1 - 1]->nombre << " es más habitable que Planeta " << cuerposCelestiales[indice2 - 1]->nombre << endl;
        }
    }
    else {
        cout << "Tiene que ingresar 2 planetas para comparar" << endl;
    }
    

}

void compararCuerpos() {
    if (cuerposCelestiales.size()>1) {
        int indice1, indice2;
        cout << "Seleccione dos cuerpos celestes " << endl;
        listarCuerpos();
        cout << endl;
        cout << "Cuerpo 1:";
        cin >> indice1;
        cout << "Cuerpo 2:";
        cin >> indice2;
        if (cuerposCelestiales[indice1-1] == cuerposCelestiales[indice2-1]) {
            cout << cuerposCelestiales[indice1 - 1]->nombre << " y " << cuerposCelestiales[indice2 - 1]->nombre << " son dos cuerpos con caracteristicas iguales" << endl;
        } else {
            cout << cuerposCelestiales[indice1 - 1]->nombre << " y " << cuerposCelestiales[indice2 - 1]->nombre << " son dos cuerpos con caracteristicas diferentes" << endl;

        }
    }
    else {
        cout << "Tiene que ingresar 2 cuerpos celestes para ingresar a esta opcion" << endl;
    }
    
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
            for (int i = 0; i < cuerposCelestiales.size(); i++){
                delete cuerposCelestiales[i];
            }
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
    delete plan;
    delete estre;
    delete sat;
}
