#include <stdio.h>

int main (void) {
    int i = 0, minimo = 0, maximo = 0, resultado = 0;
    printf("Ingrese los extremos de un rango para que el programa pueda procesarlos.\n");
    printf("Ingrese el extremo inferior del rango: ");
    scanf("%d", &minimo);
    printf("Ingrese el extremo superior del rango: ");
    scanf("%d", &maximo);
    for (i = minimo; i <= maximo; i++) resultado += i;
    printf("La sumatoria de todos los valores en el intervalo [%d;%d] es: %d", minimo, maximo, resultado);
    return 0;
}