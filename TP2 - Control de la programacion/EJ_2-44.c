#include <stdio.h>

int main (void) {
    int c_valores = 0;
    float IN = 0, sumatoria = 0;

    printf("Ingrese por consola una serie de valores reales positivos y se calculara el promedio entre ellos.\nPara indicar el final de la serie ingrese un 0.\n");
    do {
        printf("Ingrese un valor: ");
        scanf("%f", &IN);
        if (IN < 0) printf("El valor debe ser un real positivo.\n");
        else if (IN > 0) {
            sumatoria += IN;
            c_valores++;
        }       
    } while (IN != 0);
    if (c_valores == 0) printf("No se han ingresado valores en la serie.\n");
    else printf("El promedio de los valores ingresados es: %.2f", sumatoria / c_valores);
    return 0;
}