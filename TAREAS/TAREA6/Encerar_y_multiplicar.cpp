#include <iostream>
#include <cstdlib>
using namespace std;

// Ingresar datos para dos matrices
void ingresarMatrices(int *m1, int *m2, int filas, int columnas) {
    cout << "Ingrese datos de la primera matriz:" << endl;
    for(int i = 0; i < filas * columnas; i++) {
        cout << "M1[" << (i/columnas) << "," << (i%columnas) << "]: ";
        cin >> *(m1 + i);
    }
    cout << "Ingrese datos de la segunda matriz:" << endl;
    for(int i = 0; i < filas * columnas; i++) {
        cout << "M2[" << (i/columnas) << "," << (i%columnas) << "]: ";
        cin >> *(m2 + i);
    }
}

// Multiplicar dos matrices 3x3
void multiplicarMatrices(int *m1, int *m2, int *resultado, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int sum = 0;
            for (int k = 0; k < columnas; k++) {
                sum += (*(m1 + i * columnas + k)) * (*(m2 + k * columnas + j));
            }
            *(resultado + i * columnas + j) = sum;
        }
    }
}

// Imprimir la matriz resultado
void imprimirMatriz(int *m, int filas, int columnas, const char *msg) {
    cout << msg << endl;
    for(int i = 0; i < filas * columnas; i++) {
        cout << *(m + i) << " ";
        if((i + 1) % columnas == 0) cout << endl;
    }
}

// Encerar la matriz resultado
void encerarMatriz(int *pm, int filas, int columnas) {
    for(int i = 0; i < filas * columnas; i++) {
        *(pm + i) = 0;
    }
}

int main() {
    int filas = 3, columnas = 3;
    int *m1 = (int*)malloc(filas * columnas * sizeof(int));
    int *m2 = (int*)malloc(filas * columnas * sizeof(int));
    int *resultado = (int*)malloc(filas * columnas * sizeof(int));

    ingresarMatrices(m1, m2, filas, columnas);

    multiplicarMatrices(m1, m2, resultado, filas, columnas);
    imprimirMatriz(resultado, filas, columnas, "Resultado de la multiplicación:");

    encerarMatriz(resultado, filas, columnas);
    imprimirMatriz(resultado, filas, columnas, "Resultado ENCERADO:");

    // Liberar memoria
    free(m1);
    free(m2);
    free(resultado);

    return 0;
}
