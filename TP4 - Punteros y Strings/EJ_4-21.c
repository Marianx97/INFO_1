#include "../Biblioteca/inc/my_math.h"

int main (void) {
    double array[24], promedio = 0;
    int c_elementos = 24;
    for (int i = 0; i < 24; i++) array[i] = (double) (rand() % 1500);
    promedio = promedio_aritmetico(array, c_elementos);
    printf("["); for (int i = 0; i < 24; i++) if (i == 23) printf("%.2f", array[i]); else printf("%.2f; ", array[i]); printf("]\n");
    printf("El valor promedio del array es: %.2f\n", promedio);
    return 0;
}