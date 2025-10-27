#include <iostream>
using namespace std;
int factorial(int n) { return n == 0 ? 1 : n * factorial(n-1); }
int main() {
    int a = 5, b = 7;
    int* arr = &a;
    int* fin = &b + 1;
    for (int* p = arr; p < fin; ++p)
        cout << "Factorial de " << *p << ": " << factorial(*p) << endl;
    return 0;
}
