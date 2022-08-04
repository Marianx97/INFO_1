#include <stdio.h>

int main (void) {
    int IN = 0, i = 0, sumatoria = 0, factor = 1;
    printf("Ingrese un valor entero positivo: ");
    scanf("%d", &IN);
    if (IN <= 0) {
        printf("El valor ingresado debe ser positivo!\n");
        return -1;
    } else {
        if (IN < 6) {
            printf("No existen numeros perfectos entre 1 y %d.\n", IN);
        } else {
            printf("Los numeros perfectos que se encuentran entre 1 y %d son:\n", IN);
            for (i = 1; i <= IN; i++) {
                while (factor < i) {
                    if (i % factor == 0) sumatoria += factor;
                    factor++;
                }
                if (sumatoria == i) printf("%d, ", i);
                sumatoria = 0;
                factor = 1;
            }
        }
    }    
    return 0;
}