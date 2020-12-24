#include "main.h"

/* READ ME!!!!!
Compiling with Windows mixed with GCC screws with things a bit.
GCC's long double != MSVC's long double.
And long story short, because of conversion problems, long doubles
are unusable. End of story.
*/

int main(int argc, char *argv[]){
    int exponent = 0; // int replaced with long long int to stop NaN from sqrt overflow with long double.
    double base = 0; 
    printf("Enter a base and an exponent: ");
    fflush(stdout); // I haven't a clue why this is necessary to stop the terribleness
    scanf("%d %lf", &base, &exponent); // of the compiler completely ignoring the order
    printf("%Lf", powerTo(exponent, base)); // of the functions printf and scanf. 
}                                           // Such is life in C.
