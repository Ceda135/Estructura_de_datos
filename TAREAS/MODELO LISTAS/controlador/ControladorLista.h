#ifndef CONTROLADORLISTA_H
#define CONTROLADORLISTA_H
#include "../modelo/Lista.h"
#include <iostream>
using namespace std;

class ControladorLista {
private:
    Lista lista;
public:
    void insertarCabeza(int valor) { lista.insertarCabeza(valor); }
    void insertarCola(int valor) { lista.insertarCola(valor); }
    void eliminarCabeza() { lista.eliminarCabeza(); }
    void imprimir() { lista.imprimir(); }

    void buscar(int valor) {
        if (lista.buscar(valor))
            cout << "Valor encontrado: " << valor << endl;
        else
            cout << "Valor no encontrado" << endl;
    }
};

#endif
