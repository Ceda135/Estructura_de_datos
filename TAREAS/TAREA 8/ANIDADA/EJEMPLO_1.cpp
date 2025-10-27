#include <iostream>
using namespace std;
int mc91(int n) { return n > 100 ? n-10 : mc91(mc91(n+11)); }
int x = 87, y = 200;
int main() {
    int* p = &x;
    int* f = &y + 1;
    for (; p < f; ++p)
        cout << "mc91(" << *p << "): " << mc91(*p) << endl;
    return 0;
}
