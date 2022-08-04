#include <stdio.h>

int main (void) {
    int extremoInferior = 0, extremoSuperior = 0, longitudDelIntervalo = 0, cantidadDeIntervalos = 0, acumulador = 0;
    printf("En este programa se tomarán 2 valores ingresados por el usuario, se determinará el intervalo entre ellos y se separará en 4 sub-intervalos.\n");
    printf("Ingrese el extremo inferior del intervalo: "); scanf("%d", &extremoInferior);
    printf("Ingrese el extremo superior del intervalo: "); scanf("%d", &extremoSuperior);
    longitudDelIntervalo = extremoSuperior - extremoInferior;
    if (longitudDelIntervalo % 4) {
        cantidadDeIntervalos = longitudDelIntervalo / 4 + 1;
        longitudDelIntervalo = cantidadDeIntervalos * 4;
    } else {
        cantidadDeIntervalos = longitudDelIntervalo / 4;
    }
    printf("El rango de valores comienza en %d y finaliza en %d\n", extremoInferior, extremoInferior + longitudDelIntervalo);
    for (int i = 1; i <= cantidadDeIntervalos; i++) {
        if (i == 1) {
            acumulador = extremoInferior + 4;
            printf("El sub-intervalo 1 es desde %d hasta %d\n", extremoInferior, acumulador);
        } else {
            printf("El sub-intervalo %d es desde %d hasta %d\n", i, acumulador, acumulador + 4);
            acumulador += 4;
        }
    }
    return 0;
}