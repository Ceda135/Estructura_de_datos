#include <iostream>
#include <cstdlib>
using namespace std;

// Suma de matrices
void operarMatrices(int *m1, int *m2, int *res, int filas, int columnas) {
    for (int i = 0; i < filas * columnas; i++) {
        *(res + i) = *(m1 + i) + *(m2 + i);
    }
}

// Resta de matrices (sobrecarga)
void operarMatrices(int *m1, int *m2, int *res, int filas, int columnas, char op) {
    for (int i = 0; i < filas * columnas; i++) {
        if (op == '-')
            *(res + i) = *(m1 + i) - *(m2 + i);
        else if (op == '*')
            *(res + i) = *(m1 + i) * *(m2 + i);
        else if (op == '/')
            *(res + i) = (*(m2 + i) != 0) ? (*(m1 + i) / *(m2 + i)) : 0;
    }
}

// Imprimir matriz
void imprimirMatriz(int *m, int filas, int columnas, const char *msg) {
    cout << msg << endl;
    for (int i = 0; i < filas * columnas; i++) {
        cout << *(m + i) << " ";
        if ((i + 1) % columnas == 0) cout << endl;
    }
}

int main() {
    int filas = 3, columnas = 3;
    int *m1 = (int*)malloc(filas * columnas * sizeof(int));
    int *m2 = (int*)malloc(filas * columnas * sizeof(int));
    int *res = (int*)malloc(filas * columnas * sizeof(int));

    // Ingreso de valores para las matrices
    cout << "Ingrese datos de la primera matriz:\n";
    for (int i = 0; i < filas * columnas; i++) cin >> *(m1 + i);
    cout << "Ingrese datos de la segunda matriz:\n";
    for (int i = 0; i < filas * columnas; i++) cin >> *(m2 + i);

    // Suma
    operarMatrices(m1, m2, res, filas, columnas);
    imprimirMatriz(res, filas, columnas, "Suma:");

    // Resta
    operarMatrices(m1, m2, res, filas, columnas, '-');
    imprimirMatriz(res, filas, columnas, "Resta:");

    // Multiplicación (elemento a elemento)
    operarMatrices(m1, m2, res, filas, columnas, '*');
    imprimirMatriz(res, filas, columnas, "Multiplicación (elemento a elemento):");

    // División (elemento a elemento)
    operarMatrices(m1, m2, res, filas, columnas, '/');
    imprimirMatriz(res, filas, columnas, "División (elemento a elemento):");

    free(m1);
    free(m2);
    free(res);

    return 0;
}
