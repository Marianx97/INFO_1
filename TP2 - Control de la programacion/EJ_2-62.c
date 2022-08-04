#include <stdio.h>

int main (void) {
    int decimal = 0, decimal_aux = 0, binario = 0, digito = 0, restador = 0;
    printf("Ingrese un valor y este sera convertido en binario.\n");
    printf("Valor a convertir: "); scanf("%d", &decimal);
    decimal_aux = decimal;
    do {
        digito = 1;
        restador = 1;
        while (decimal_aux - restador >= 0) {
            restador *= 2;
            digito *= 10;
        }
        binario += digito / 10;
        decimal_aux -= restador / 2;
    } while (decimal_aux > 0);
    printf("Valor decimal: %d\n", decimal);
    printf("Valor binario: %d\n", binario);
    return 0;
}
