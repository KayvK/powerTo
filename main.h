#include <iostream>

using std::cout;
using std::cin;
using std::endl;

typedef long double ldouble;

ldouble powerTo(int exponent, ldouble base){ // TODO optimization (use a more efficient algorithm)
    ldouble total = 1;
    while(exponent != 0){
        total *= base;
        --exponent;
    }
    if (exponent < 0){
        total = 1 / total;
    }
    return total; // TODO fix imprecision with double
}