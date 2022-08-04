#include <stdio.h>

int main (void) {
    int IN = 0, c_pares = 0, c_impares = 0;
    printf("Ingrese una serie de valores enteros y el programa determinara la cantidad de enteros pares e impares que se ingresaron.\nPara terminar la carga de valores, ingrese un 0.\n");
    do {
        printf("Ingrese un valor entero: ");
        scanf("%d", &IN);
        if (IN != 0) {
            if (IN % 2 == 0) c_pares++;
            if (IN % 2 != 0) c_impares++;
        }
    } while (IN != 0);
    printf("Cantidad de valores pares ingresados: %d\n", c_pares);
    printf("Cantidad de valores impares ingresados: %d\n", c_impares);
    return 0;
}