#include <stdio.h>

int main (void) {
    int R1 = 47000, R2 = 680, R3 = 2200000;
    printf("En este programa calcularemos la resistencia total de un circuito serie donde: ");
    printf("\nR1 = %d ohms\nR2 = %d ohms\nR3 = %d ohms", R1, R2, R3);
    printf("\nRT = 7*R1 + 5*R2 + 9*R3 = %d ohms", 7*R1 + 5*R2 + 9*R3);
    return 0;
}