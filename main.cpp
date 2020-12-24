#include "main.h"

// TODO learn to replace namespaces
int main(){
    int exponent = 0;
    ldouble base = 0;
    cout << "Enter a base and an exponent: ";
    cin >> exponent >> base;
    cout << powerTo(exponent, base);
}
