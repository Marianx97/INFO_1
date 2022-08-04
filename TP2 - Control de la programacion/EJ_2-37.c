#include <stdio.h>

int main (void) {
    int i = 0, j = 0;
    float IN = 0, promedios[5], promedio_total = 0, promedio_grupal = 0;
    printf("Ingrese una secuencia de 30 valores, se registraran los promedios de grupos de 6 valores y el promedio total.\n");
    for (i = 1; i <= 30; i++) {
        printf("Ingrese el valor No %d:", i);
        scanf("%f", &IN);
        promedio_total += IN;
        promedio_grupal += IN;
        if (i % 6 == 0) {
            promedios[j] = promedio_grupal / 6;
            promedio_grupal = 0;
            j++;
        }
    }
    for (i = 0; i < 5; i++) printf("El promedio del grupo No %d es %.2f\n", i + 1, promedios[i]);
    printf("El promedio total es %.2f\n", promedio_total / 30);
    return 0;
}