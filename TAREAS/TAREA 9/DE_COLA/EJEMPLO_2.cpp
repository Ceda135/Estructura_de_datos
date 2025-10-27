#include <iostream>
using namespace std;
int sumaCola(int* inicio, int* fin, int acum=0) {
    return (inicio == fin) ? acum : sumaCola(inicio+1, fin, acum + *inicio);
}
int a = 1, b = 2, c = 3, d = 4, e = 6, f = 8;
int main() {
    int* ini1 = &a;
    int* fin1 = &c + 1;
    cout << "Suma cola conj1: " << sumaCola(ini1, fin1) << endl;
    int* ini2 = &d;
    int* fin2 = &f + 1;
    cout << "Suma cola conj2: " << sumaCola(ini2, fin2) << endl;
    return 0;
}
