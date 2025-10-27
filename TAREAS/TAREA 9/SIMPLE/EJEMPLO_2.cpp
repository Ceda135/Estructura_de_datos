#include <iostream>
using namespace std;
int sumaDigitos(int n) { return n<10 ? n : n%10 + sumaDigitos(n/10); }
int x = 328, y = 1234;
int main() {
    int* p = &x;
    int* f = &y + 1;
    for (; p < f; ++p)
        cout << "Suma de dígitos de " << *p << ": " << sumaDigitos(*p) << endl;
    return 0;
}
