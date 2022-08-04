#include <stdio.h>

int mcd (int, int);

int main (void) {
    int valor_1 = 0, valor_2 = 0;
    printf("Ingrese 2 valores y se les calculara el maximo comun divisor (MCD).\n");
    printf("Valor 1: "); scanf("%d", &valor_1);
    printf("Valor 2: "); scanf("%d", &valor_2);
    printf("El MCD entre %d y %d es: %d\n", valor_1, valor_2, mcd(valor_1, valor_2));
    return 0;
}

int mcd (int valor_1, int valor_2) {
    int aux = 0, resto = 0;
    // para que el algoritmo funcione, valor_1 debe ser mayor que valor_2
    if (valor_1 < valor_2) {
        aux = valor_1; // guardamos el valor menor en aux
        valor_1 = valor_2; // asignamos el valor maxor a valor_1
        valor_2 = aux; // asignamos el valor menor a valor_2
    }

    do {
        resto = valor_1 % valor_2;
        if (resto != 0) {
            valor_1 = valor_2;
            valor_2 = resto;
        }
    } while (resto != 0);
    
    return valor_2;
}