#include <iostream>
#include <cstdlib>
using namespace std;

void ingresarMatriz(int *pm, int filas, int columnas) {
    for (int i = 0; i < filas * columnas; i++) {
        cout << "Ingrese valor [" << (i/columnas) << "," << (i%columnas) << "]: ";
        cin >> *(pm + i);
    }
}

void encerarMatriz(int *pm, int filas, int columnas) {
    for (int i = 0; i < filas * columnas; i++) {
        *(pm + i) = 0;
    }
}

void imprimirMatriz(int *pm, int filas, int columnas) {
    for (int i = 0; i < filas * columnas; i++) {
        cout << *(pm + i) << " ";
        if ((i + 1) % columnas == 0) cout << endl;
    }
}

int main() {
    int filas = 3, columnas = 3;
    int *matriz = (int*)malloc(filas * columnas * sizeof(int));

    ingresarMatriz(matriz, filas, columnas);

    encerarMatriz(matriz, filas, columnas);

    cout << "Matriz encerada:" << endl;
    imprimirMatriz(matriz, filas, columnas);

    free(matriz);
    return 0;
}
