#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double matriz_A[4][4] = {
        {1,2,3,4},
        {2,5,6,7},
        {3,6,8,9},
        {4,7,9,10}
    }, matriz_B[4][4] = {
        {1,2,2,4},
        {2,5,6,10},
        {3,9,8,9},
        {4,7,28,10}
    }, matriz_C[2][4] = {
        {1,49,2,4},
        {3,4,9,10}
    };
    if (matriz_simetrica(4,4,matriz_A)) printf("La matriz A es simetrica.\n");
    if (!matriz_simetrica(4,4,matriz_B)) printf("La matriz B no es simetrica.\n");
    if (!matriz_simetrica(2,4,matriz_A)) printf("La matriz C no es simetrica.\n");
    return 0;
}