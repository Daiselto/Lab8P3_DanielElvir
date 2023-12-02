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
    if (cuerposCelestiales.size()>0) {
           
        int cont = 0;
        for (CelestialBody* wows : cuerposCelestiales) {
            Planeta* tempPlaneta = dynamic_cast<Planeta*>(wows);
            Estrella* tempEstrella = dynamic_cast<Estrella*>(wows);
            Satelite* tempSatelite = dynamic_cast<Satelite*>(wows);
            if (tempPlaneta != nullptr) {
                cout << ++cont << "- ";
                cout << "Planeta " + tempPlaneta->nombre + "(Masa: " + to_string(tempPlaneta->masa) + ", Radio: " + to_string(tempPlaneta->radio) + ", Posición(" + to_string(tempPlaneta->PosicionX) + ", " + to_string(tempPlaneta->PosicionY) + ", " + to_string(tempPlaneta->PosicionZ) + "), Velocidad(" + to_string(tempPlaneta->VelocidadX) + ", " + to_string(tempPlaneta->VelocidadY) + ", " + to_string(tempPlaneta->VelocidadZ) + "), Tipo: " + tempPlaneta->tipo + ", Atmosfera:" + to_string(tempPlaneta->presenciaAtmosfera) + ")" << endl;
            }else
            if (tempEstrella != nullptr) {
                cout << ++cont << "- ";
                cout << "Estrella " + tempEstrella->nombre + "(Masa: " + to_string(tempEstrella->masa) + ", Radio: " + to_string(tempEstrella->radio) + ", Posición(" + to_string(tempEstrella->PosicionX) + ", " + to_string(tempEstrella->PosicionY) + ", " + to_string(tempEstrella->PosicionZ) + "), Velocidad(" + to_string(tempEstrella->VelocidadX) + ", " + to_string(tempEstrella->VelocidadY) + ", " + to_string(tempEstrella->VelocidadZ) + "), Luminosidad: " + to_string(tempEstrella->luminosidad) + ", Tipo Espectral:" + tempEstrella->tipoEspectral + ")" << endl;
            }else
            if (tempSatelite != nullptr) {
                cout << ++cont << "- ";
                cout << "Satelite " + tempSatelite->nombre + "(Masa: " + to_string(tempSatelite->masa) + ", Radio: " + to_string(tempSatelite->radio) + ", Posición(" + to_string(tempSatelite->PosicionX) + ", " + to_string(tempSatelite->PosicionY) + ", " + to_string(tempSatelite->PosicionZ) + "), Velocidad(" + to_string(tempSatelite->VelocidadX) + ", " + to_string(tempSatelite->VelocidadY) + ", " + to_string(tempSatelite->VelocidadZ) + "), Cuerpo Principal: " + tempSatelite->cuerpoPrincipal + ")" << endl;
            }
            else {
                cout << ++cont << "- ";
                cout << wows->nombre + " (Masa: " + to_string(wows->masa) + ", Radio: " + to_string(wows->radio) + ", Posición(" + to_string(wows->PosicionX) + ", " + to_string(wows->PosicionY) + ", " + to_string(wows->PosicionZ) + "), Velocidad(" + to_string(wows->VelocidadX) + ", " + to_string(wows->VelocidadY) + ", " + to_string(wows->VelocidadZ) + "))" << endl;
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
                cout << "Planeta " + tempPlaneta->nombre + "(Masa: " + to_string(tempPlaneta->masa) + ", Radio: " + to_string(tempPlaneta->radio) + ", Posición(" + to_string(tempPlaneta->PosicionX) + ", " + to_string(tempPlaneta->PosicionY) + ", " + to_string(tempPlaneta->PosicionZ) + "), Velocidad(" + to_string(tempPlaneta->VelocidadX) + ", " + to_string(tempPlaneta->VelocidadY) + ", " + to_string(tempPlaneta->VelocidadZ) + "), Tipo: " + tempPlaneta->tipo + ", Atmosfera:" + to_string(tempPlaneta->presenciaAtmosfera) + ")" << endl;
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
