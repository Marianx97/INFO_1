#include <stdio.h>

int main (void) {
    int IN = 0, sumatoria = 0, factor = 1;
    printf("Ingrese un valor entero y el programa determinara si es un numero perfecto.\n");
    printf("Aclaracion: un numero es perfecto si la sumatoria de sus factores, exceptuandose a si mismo, dan como resultado ese numero.\n");
    printf("Ingrese su valor: ");
    scanf("%d", &IN);
    while (factor < IN) {
        if (IN % factor == 0) sumatoria += factor;
        factor++;
    }
    if (sumatoria == IN) printf("%d es un numero perfecto", IN);
    else printf("%d NO es un numero perfecto", IN);
    return 0;
}