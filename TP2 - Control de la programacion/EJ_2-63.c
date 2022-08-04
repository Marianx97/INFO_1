#include <stdio.h>

int main (void) {
    int decimal = 0, decimal_aux = 0, octal = 0, digito = 1, resto = 0;
    printf("Ingrese un valor y este sera convertido en octal.\n");
    printf("Valor a convertir: "); scanf("%d", &decimal);
    decimal_aux = decimal;
    
    do {
        resto = decimal_aux % 8;
        octal += resto * digito;
        digito *= 10;
        decimal_aux /= 8;
    } while (decimal_aux > 0);
    printf("Valor decimal: %d\n", decimal);
    printf("Valor octal: %d\n", octal);
    return 0;
}