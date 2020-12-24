#include "main.h"

// TODO learn to replace namespaces
int main(/*int argc, char *argv[]*/){
    int exponent = 0;
    double base = 0;
    printf("enter an exponent and a base: ");
    scanf("%i %lf", &exponent, &base);
    printf("%lf", powerTo(exponent, base));
}
