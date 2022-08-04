#include <stdio.h>

int main (void) {
    int c_elementos = 0;
    float IN = 0;

    do {
        printf("Ingrese un numero real: ");
        scanf("%f", &IN);
        c_elementos++;
    } while (IN < 283);
    printf("Se han ingresado %d elementos", c_elementos);
    return 0;
}