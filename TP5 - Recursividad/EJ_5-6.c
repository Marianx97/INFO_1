#include "../Biblioteca/inc/my_math.h"

int main (void) {
    double arr[] = {5, 9, 8, 6, 7, 3}, v_min = 0;
    int posicion = 0;
    minimo(arr, 6, 0, &v_min, &posicion);
    printf("El valor minimo es %.2f y se encuentra en la posicion %d.\n", v_min, posicion);
    return 0;
}