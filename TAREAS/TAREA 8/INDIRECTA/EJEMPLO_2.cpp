#include <iostream>
using namespace std;
void B(int);
void A(int n) {
    if (n<=0) return;
    cout << "A:" << n << endl;
    B(n-1);
}
void B(int n) {
    if (n<=0) return;
    cout << "B:" << n << endl;
    A(n-1);
}
int z = 3, w = 5;
int main() {
    int* p = &z;
    int* f = &w + 1;
    for (; p < f; ++p)
        A(*p);
    return 0;
}
