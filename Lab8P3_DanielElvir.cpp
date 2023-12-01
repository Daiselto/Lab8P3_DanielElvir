#include <iostream>
#include <locale>
using namespace std;

void agregarCuerpo() {

}

void listarCuerpos() {

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
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            agregarCuerpo();
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
