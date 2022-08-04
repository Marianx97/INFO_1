#include "../Biblioteca/inc/my_math.h"

int main (void) {
    double arr[] = {5, 9, 8, 6, 7, 3}, suma = 0, promedio = 0;
    int posicion = 0;
    promedio = prom_rec(arr, 6, 0, 0);
    printf("El promedio de los valores del array es %.2f\n", promedio);
    return 0;
}