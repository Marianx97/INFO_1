#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double matriz_A[4][4] = {
        {1,2,3,4},
        {2,5,6,7},
        {3,6,8,9},
        {4,7,9,10}
    };
    printf("La traza de la matriz A es: %.2f\n", traza_de_matriz(4, 4, matriz_A));
    return 0;
}