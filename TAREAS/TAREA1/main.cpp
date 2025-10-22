#include "Fraccion.h"

int main() {
    Fraccion f1(2, 3), f2(4, 5);
    Fraccion resultado = f1.multiplicar(f2);
    resultado.mostrar(); // Debería mostrar 8/15
    return 0;
}
