#include <stdio.h>

int main (void) {
    int IN = 0, pares = 0, impares = 0;
    printf("Ingrese un valor entero por consola y se determinara si el valor es par o impar. Para finalizar el programa ingrese un 0.\n");
    do {
        printf("Ingrese un valor: ");
        scanf("%d", &IN);
        if (IN != 0 && IN % 2 == 0) {
            printf("%d es un valor par\n", IN);
            pares++;
        }
        else if (IN != 0 && IN % 2 != 0) {
            printf("%d es un valor impar\n", IN);
            impares++;
        }
    } while (IN != 0);
    printf("Se registraron %d numeros pares y %d numeros impares.\n", pares, impares);
    return 0;
}