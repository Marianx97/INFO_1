#include <stdio.h>

int main (void) {
    int R1 = 56, R2 = 33, R3 = 15;
    printf("En este programa calcularemos la resistencia total de un circuito serie donde: ");
    printf("\nR1 = %d ohms\nR2 = %d ohms\nR3 = %d ohms", R1, R2, R3);
    printf("\nRT = R1 + R2 + R3 = %d ohms", R1 + R2 + R3);
    return 0;
}