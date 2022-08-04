#include <stdio.h>

int main (void) {
    /* Tomado directamente del ejercicio 4 */
    int R1 = 56, R2 = 33, R3 = 15;
    printf("En este programa calcularemos el promedio de las resistencias de un circuito serie donde: ");
    printf("\nR1 = %d ohms\nR2 = %d ohms\nR3 = %d ohms", R1, R2, R3);
    printf("\nR_promedio: %d ohms", (R1 + R2 + R3)/3);
    return 0;
}