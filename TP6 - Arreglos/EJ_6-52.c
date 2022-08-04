#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    int matriz[4][4] = {
        {1,27,3,-4},
        {5,16,7,-8},
        {9,0,11,-1},
        {-6,14,15,-11}
    }, maximo = 0, minimo = 0;
    maximo = obtener_extremo_int_matriz(4, 4, matriz, MAXIMO);
    minimo = obtener_extremo_int_matriz(4, 4, matriz, MINIMO);
    printf("Matriz:\n");
    print_matriz_int(4,4,matriz);
    printf("--o--o--o--o--\n");
    printf("El maximo valor dentro de la matriz es: %d\n", maximo);
    printf("El minimo valor dentro de la matriz es: %d\n", minimo);
    return 0;
}