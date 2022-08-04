#include <stdio.h>

int main (void) {
    int i = 1, N = 0, resultado = 1;
    printf("Ingrese un valor entero positivo para calcularle su factorial.");
    do {
        printf("El valor debe encontrarse dentro del rango [0;35].\nIngrese su valor: ");
        scanf("%d", &N);
    } while (N < 0 || N > 35);
    if (N) {
        do {
            resultado *= i;
            i++;
        } while (i <= N);
    } else resultado = 1;    
    
    printf("!%d = %d", N, resultado);
    return 0;
}