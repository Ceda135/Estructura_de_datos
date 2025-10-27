#include <iostream>
using namespace std;
int fibonacci(int n) { return n<=1 ? n : fibonacci(n-1) + fibonacci(n-2); }
int a = 5, b = 8;
int main() {
    int* ptr = &a;
    int* end = &b + 1;
    for (; ptr < end; ++ptr)
        cout << "Fibonacci(" << *ptr << "): " << fibonacci(*ptr) << endl;
    return 0;
}
