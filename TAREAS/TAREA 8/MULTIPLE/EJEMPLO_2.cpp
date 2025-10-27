#include <iostream>
using namespace std;
int sumaArbol(int n, int nivel, int maxNivel) {
    if (nivel > maxNivel) return 0;
    return n + sumaArbol(n*2, nivel+1, maxNivel) + sumaArbol(n*2+1, nivel+1, maxNivel);
}
int root1 = 1, root2 = 3;
int main() {
    int* p = &root1;
    int* f = &root2 + 1;
    for (; p < f; ++p)
        cout << "Suma árbol raíz " << *p << ": " << sumaArbol(*p, 1, 2) << endl;
    return 0;
}
