#include <iostream>
using namespace std;
bool esImpar(int);
bool esPar(int n) { return n==0 ? true : esImpar(n-1); }
bool esImpar(int n) { return n==0 ? false : esPar(n-1); }
int x = 4, y = 7;
int main() {
    int* p = &x;
    int* f = &y + 1;
    for (; p < f; ++p)
        cout << *p << " es par: " << boolalpha << esPar(*p) << endl;
    return 0;
}
