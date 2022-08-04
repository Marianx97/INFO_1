#include <stdio.h>

int main (void) {
    int R1 = 56, R2 = 33, R3 = 15;
    printf("En este programa calcularemos la resistencia total de un circuito paralelo donde: ");
    printf("\nR1 = %d ohms\nR2 = %d ohms\nR3 = %d ohms", R1, R2, R3);
    printf("\nRT = 1/((1/R1) + (1/R2) + (1/R3)) = %.2f ohms", 1.0/(1.0/R1 + 1.0/R2 + 1.0/R3));
    return 0;
}