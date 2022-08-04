#include <stdio.h>

int main (void) {
    float radio = 0;
    printf("En este programa calcularemos la superficie de un círculo.\nIngrese el radio del circulo: ");
    scanf("%f", &radio);
    printf("La superficie del circulo es: %.2f", (3.14 * radio * radio));
    return 0;
}