#include <stdio.h>

int main (void) {
    int i = 0;
    float in = 0;
    printf("Ingrese un valor numerico y el programa presentara su tabla de multiplicacion: ");
    scanf("%f", &in);
    for (i = 0; i <= 10; i++) printf("%.2f * %d = %.2f\n", in, i, in * i);
    return 0;
}
