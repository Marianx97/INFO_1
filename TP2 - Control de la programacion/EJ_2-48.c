#include <stdio.h>

int main (void) {
    int minimo = 0, maximo = 0, longIntervalo = 0, longSubIntervalos = 0, IN = 0,
    cantSubIntervalo1 = 0, cantSubIntervalo2 = 0, cantSubIntervalo3 = 0, cantSubIntervalo4 = 0;
    printf("Ingrese el extremo inferior del intervalo: ");
    scanf("%d", &minimo);
    printf("Ingrese el extremo superior del intervalo: ");
    scanf("%d", &maximo);
    longIntervalo = maximo - minimo;
    if (longIntervalo % 4) longIntervalo = ((longIntervalo / 4) + 1) * 4;
    longSubIntervalos = longIntervalo / 4;
    do {
        printf("Para finalizar la carga de valores, ingrese el valor del extremo superior del intervalo.\n");
        printf("Ingrese un valor: ");
        scanf("%d", &IN);
        if (minimo <= IN && IN <= minimo + longSubIntervalos) cantSubIntervalo1++;
        else if (minimo + longSubIntervalos < IN && IN <= minimo + 2 * longSubIntervalos) cantSubIntervalo2++;
        else if (minimo + 2 * longSubIntervalos < IN && IN <= minimo + 3 * longSubIntervalos) cantSubIntervalo3++;
        else if (minimo + 3 * longSubIntervalos < IN && IN <= minimo + 4 * longSubIntervalos) cantSubIntervalo4++;
    } while (IN != maximo);
    printf("Se registraron %d valores dentro del intervalo 1.\n", cantSubIntervalo1);
    printf("Se registraron %d valores dentro del intervalo 2.\n", cantSubIntervalo2);
    printf("Se registraron %d valores dentro del intervalo 3.\n", cantSubIntervalo3);
    printf("Se registraron %d valores dentro del intervalo 4.\n", cantSubIntervalo4);
    return 0;
}