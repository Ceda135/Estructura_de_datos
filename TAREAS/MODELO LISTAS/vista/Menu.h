#ifndef MENU_H
#define MENU_H
#include "../controlador/ControladorLista.h"
#include <iostream>
using namespace std;

class Menu {
private:
    ControladorLista ctrl;
public:
    void mostrar() {
        int opcion, valor;
        do {
            cout << "\n--- MENU ---\n";
            cout << "1. Insertar cabeza\n";
            cout << "2. Insertar cola\n";
            cout << "3. Eliminar cabeza\n";
            cout << "4. Buscar\n";
            cout << "5. Imprimir\n";
            cout << "0. Salir\n";
            cout << "Opción: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    cout << "Valor: "; cin >> valor;
                    ctrl.insertarCabeza(valor);
                    break;
                case 2:
                    cout << "Valor: "; cin >> valor;
                    ctrl.insertarCola(valor);
                    break;
                case 3:
                    ctrl.eliminarCabeza();
                    break;
                case 4:
                    cout << "Buscar valor: "; cin >> valor;
                    ctrl.buscar(valor);
                    break;
                case 5:
                    ctrl.imprimir();
                    break;
            }
        } while (opcion != 0);
    }
};

#endif
