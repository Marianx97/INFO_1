#include <stdio.h>

int main (void) {
    int i = 1, N = 0, resultado = 1;
    printf("Ingrese un valor entero positivo para calcularle su factorial: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("El valor debe ser un entero positivo!");
        return -1;
    }
    do {
        resultado *= i;
        i++;
    } while (i <= N);
    
    printf("!%d = %d", N, resultado);
    return 0;
}