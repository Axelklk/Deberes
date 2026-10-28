#include <iostream>
#include "ListaDobleCircular.h"

using namespace std;

int main() {
    ListaDobleCircular<int> lista;

    // Pruebas de insercion
    lista.insertarAlFinal(20);
    lista.insertarAlFinal(30);
    lista.insertarAlFinal(40);
    lista.insertarAlInicio(10);

    cout << "ESTADO INICIAL" << endl;
    lista.imprimir();
    cout << "Tamanio: " << lista.getTamanio() << endl;

    // ... (Tu código de eliminar y buscar se mantiene igual) ...

    cout << "\nELIMINANDO UN VALOR QUE NO EXISTE (99)" << endl;
    lista.eliminar(99);
    
    // NUEVA PRUEBA: Obtener elementos por posición
    cout << "\n=== PRUEBA: OBTENER EN POSICION ===" << endl;
    lista.imprimir();
    cout << "Elemento en posicion 0: " << lista.obtenerEnPosicion(0) << endl;
    cout << "Elemento en posicion 1: " << lista.obtenerEnPosicion(1) << endl;
    cout << "Elemento en posicion 5 (Invalida): ";
    lista.obtenerEnPosicion(5);

    cout << "\nPRUEBA CON OTRO TIPO (string)" << endl;
    ListaDobleCircular<string> nombres;
    nombres.insertarAlFinal("Ana");
    nombres.insertarAlInicio("Luis");
    nombres.imprimir();

    return 0;
}