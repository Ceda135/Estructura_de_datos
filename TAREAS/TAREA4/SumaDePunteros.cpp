#include <iostream>
using namespace std;

int main() {
    int a = 5;              
    int b = 15;            

    int *pa = &a;           
    int *pb = &b;      

    int *result = new int; 


    *result = *pa + *pb;
    cout << "Suma de punteros: " << *result << endl;


    int **ppa = &pa;    


    int suma_doble = *pb + **ppa;
    cout << "Suma entre puntero y doble puntero: " << suma_doble << endl;

    delete result;          

    return 0;
}
