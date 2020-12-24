#include <stdio.h>

double powerTo(int exponent, double base){ // TODO optimization (use a more efficient algorithm)
    double total = 1;
    while(exponent != 0){
        total *= base;
        --exponent;
    }
    if (exponent < 0){
        total = 1 / total;
    }
    return total; // TODO fix imprecision with double
}