#include <stdio.h>

int main (void) {
    printf("En este programa calcularemos el tiempo de muestreo para una señal de 250Hz\n");
    printf("El tiempo de muestreo se calcula a través del teorema de Nyquist: Tm = 1/2f\n");
    printf("Para una frecuencia de 250Hz, el tiempo de muestreo es: %.3f segundos", (1.00 / (2*250)));
    return 0;
}