#include "../Biblioteca/inc/my_math.h"

int main (void) {
    double array[] = {1, 2, 3, 4, 5, 6}, promedio = 0, desvio = 0;
    int c_elementos = 6;
    promedio = promedio_aritmetico(array, c_elementos);
    desvio = desvio_estandar(array, c_elementos);
    printf("Para el caso de un dado [1, 2, 3, 4, 5, 6]:\nPromedio: %.2f\nDesvio estandar: %.2f\n", promedio, desvio);
    return 0;
}