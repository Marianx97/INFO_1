#include <stdio.h>

int factorial (int);

int main (void) {
    int valor = 0, resultado = 0;

    printf("Ingrese un valor natural para calcular su factorial: "); scanf("%d", &valor);
    if (valor < 0) {
        printf("El valor debe ser natural, es decir un entero positivo.");
        return -1;
    }
    resultado = factorial(valor);
    printf("!%d = %d", valor, resultado);
    return 0;
}

int factorial (int valor) {
    int factorial = 1;
    if (valor == 0 || valor == 1) return 1;
    for (int i = 1; i <= valor; i++) factorial *= i;
    return factorial;
}