#include <iostream>
using namespace std;
int factCola(int n, int acum=1) { return n==0 ? acum : factCola(n-1, n*acum); }
int x = 5, y = 7;
int main() {
    int* p = &x;
    int* f = &y + 1;
    for (; p < f; ++p)
        cout << "Factorial cola " << *p << ": " << factCola(*p) << endl;
    return 0;
}
