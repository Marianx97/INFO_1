#include "../Biblioteca/inc/my_math.h"

int main (void) {
    double array[24], minimo = 0, maximo = 0;
    int c_elementos = 24;
    for (int i = 0; i < 24; i++) array[i] = (double) (rand() % 1500);
    maximo = obtener_extremo(array, c_elementos, MAXIMO);
    minimo = obtener_extremo(array, c_elementos, MINIMO);
    printf("["); for (int i = 0; i < 24; i++) if (i == 23) printf("%.2f", array[i]); else printf("%.2f; ", array[i]); printf("]\n");
    printf("El valor maximo del array es: %.2f\n", maximo);
    printf("El valor minimo del array es: %.2f\n", minimo);
    return 0;
}