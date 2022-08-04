#include <stdio.h>

int main (void) {
    int i = 0, sumatoria = 0;
    for (i = 0; i <= 100; i++) sumatoria += i;
    printf("La sumatoria de los numeros desde el 1 hasta el 100 es: %d", sumatoria);
    return 0;
}