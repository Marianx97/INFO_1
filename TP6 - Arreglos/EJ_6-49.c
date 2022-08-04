#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double matriz[4][4] = {
        {1,27,3,-4},
        {5,16,7.5,-2.8},
        {1.9,0,11,-1},
        {-6,14,15.6,-16.1}
    }, determinante = 0;
    determinante = determinante_nxm(4,4,matriz);
    printf("Matriz A:\n");
    print_matriz_double(4,4,matriz);
    printf("--o--o--o--o--\n");
    printf("Determinante de A: %.2f\n", determinante);
    return 0;
}
