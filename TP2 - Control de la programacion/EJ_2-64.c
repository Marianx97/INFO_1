#include <stdio.h>
#include <string.h>

int main (void) {
    char hexadecimal[8] = "00000000";
    int decimal = 0, decimal_aux = 0, resto = 0, i = 0;
    printf("Ingrese un valor y este sera convertido en hexadecimal.\n");
    printf("Valor a convertir: "); scanf("%d", &decimal);
    decimal_aux = decimal;

    do {
        resto = decimal_aux % 16;
        if (resto < 10) resto += 48;
        else resto += 55;
        hexadecimal[i] = (char) resto;
        decimal_aux /= 16;
        i++;
    } while (decimal_aux > 0);
    printf("Valor en decimal: %d\n", decimal);
    printf("Valor en hexadecimal: ");
    for (i = 7; i >= 0; i--) printf("%c", hexadecimal[i]);
    return 0;
}