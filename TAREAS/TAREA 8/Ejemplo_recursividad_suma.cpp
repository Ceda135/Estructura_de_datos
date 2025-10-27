#include <iostream>
#include <functional>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Filas: ";
    cin >> filas;
    cout << "Columnas: ";
    cin >> columnas;

    // Reservar memoria dinámicamente sin usar corchetes
    double* A = (double*)malloc(filas * columnas * sizeof(double));
    double* B = (double*)malloc(filas * columnas * sizeof(double));
    double* C = (double*)malloc(filas * columnas * sizeof(double));

    // Retorna posición lineal
    auto pos = [&](int i, int j) { return i * columnas + j; };

    cout << "Elementos de A:\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> *(A + pos(i, j));

    cout << "Elementos de B:\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> *(B + pos(i, j));

    auto imprimir = [&](const char* titulo) {
        cout << "\n" << titulo << ":\n";
        for (int i = 0; i < filas; i++, cout << endl)
            for (int j = 0; j < columnas; j++)
                cout << *(C + pos(i,j)) << " ";
    };

    cout << "\n--- SUMA DE MATRICES CON LOS 6 TIPOS DE RECURSIVIDAD ---\n";

    // 1. Recursividad simple
    function<void(int,int)> simple = [&](int i, int j){
        if (i == filas) return;
        *(C + pos(i,j)) = *(A + pos(i,j)) + *(B + pos(i,j));
        if (j + 1 < columnas) simple(i, j + 1);
        else simple(i + 1, 0);
    };
    simple(0,0);
    imprimir("Recursividad simple");

    // 2. Recursividad múltiple
    function<void(int,int)> multiple = [&](int i, int j){
        if (i < filas && j < columnas)
            *(C + pos(i,j)) = *(A + pos(i,j)) + *(B + pos(i,j));
        if (j + 1 < columnas) multiple(i, j + 1);
        if (i + 1 < filas && j == 0) multiple(i + 1, j);
    };
    multiple(0,0);
    imprimir("Recursividad múltiple");

    // 3. Recursividad anidada
    function<void(int)> anidadaFila = [&](int i){
        if (i == filas) return;
        function<void(int)> anidadaCol = [&](int j){
            if (j == columnas) return;
            *(C + pos(i,j)) = *(A + pos(i,j)) + *(B + pos(i,j));
            anidadaCol(j + 1);
        };
        anidadaCol(0);
        anidadaFila(i + 1);
    };
    anidadaFila(0);
    imprimir("Recursividad anidada");

    // 4. Recursividad cruzada
    function<void(int,int)> cruzadaA;
    function<void(int,int)> cruzadaB;
    cruzadaA = [&](int i, int j){
        if (i == filas) return;
        *(C + pos(i,j)) = *(A + pos(i,j)) + *(B + pos(i,j));
        if (j + 1 < columnas) cruzadaB(i, j + 1);
        else cruzadaA(i + 1, 0);
    };
    cruzadaB = [&](int i, int j){ cruzadaA(i, j); };
    cruzadaA(0, 0);
    imprimir("Recursividad cruzada");

    // 5. Recursividad indirecta
    function<void(int,int)> indA;
    function<void(int,int)> indB;
    indA = [&](int i,int j){
        if (i == filas) return;
        *(C + pos(i,j)) = *(A + pos(i,j)) + *(B + pos(i,j));
        indB(i, j + 1);
    };
    indB = [&](int i,int j){
        if (j == columnas) indA(i + 1, 0);
        else indA(i, j);
    };
    indA(0, 0);
    imprimir("Recursividad indirecta");

    // 6. Recursividad mutua
    function<void(int,int)> mutua1;
    function<void(int,int)> mutua2;
    mutua1 = [&](int i, int j){
        if (i >= filas) return;
        if (j < columnas) mutua2(i, j);
        else mutua1(i + 1, 0);
    };
    mutua2 = [&](int i, int j){
        *(C + pos(i,j)) = *(A + pos(i,j)) + *(B + pos(i,j));
        mutua1(i, j + 1);
    };
    mutua1(0, 0);
    imprimir("Recursividad mutua");

    free(A);
    free(B);
    free(C);
}
