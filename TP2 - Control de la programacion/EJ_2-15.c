#include <stdio.h>

int main (void) {
    float radio = 0;
    printf("En este programa calcularemos la superficie de un círculo.\nIngrese el radio del circulo: ");
    scanf("%f", &radio);
    if (radio > 0) {
        printf("La superficie del circulo es: %.2f", (3.14 * radio * radio));
    } else {
        printf("Dato NO valido!");
    }
    return 0;
}