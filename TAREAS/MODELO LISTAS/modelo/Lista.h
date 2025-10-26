#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista {
private:
    Nodo* cabeza;
public:
    Lista() : cabeza(nullptr) {}

    void insertarCabeza(int valor) {
        Nodo* nuevo = new Nodo(valor);
        nuevo->siguiente = cabeza;
        cabeza = nuevo;
    }

    void insertarCola(int valor) {
        Nodo* nuevo = new Nodo(valor);
        if (!cabeza) {
            cabeza = nuevo;
            return;
        }
        Nodo* temp = cabeza;
        while (temp->siguiente) temp = temp->siguiente;
        temp->siguiente = nuevo;
    }

    void eliminarCabeza() {
        if (!cabeza) return;
        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
    }

    Nodo* buscar(int valor) {
        Nodo* temp = cabeza;
        while (temp) {
            if (temp->dato == valor)
                return temp;
            temp = temp->siguiente;
        }
        return nullptr;
    }

    void imprimir() {
        Nodo* temp = cabeza;
        while (temp) {
            cout << temp->dato << " -> ";
            temp = temp->siguiente;
        }
        cout << "NULL" << endl;
    }
};

#endif
