#include <iostream>
using namespace std;
int cuentaPares(int n) {
    if (n == 0) return 0;
    int d = n%10;
    return (d%2==0 ? 1 : 0) + cuentaPares(cuentaPares(n/10));
}
int m = 2468, n = 12345;
int main() {
    int* p = &m;
    int* f = &n + 1;
    for (; p < f; ++p)
        cout << "Pares en " << *p << ": " << cuentaPares(*p) << endl;
    return 0;
}
