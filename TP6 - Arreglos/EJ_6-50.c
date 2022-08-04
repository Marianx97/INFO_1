#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double matriz[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    }, matriz_t[2][3];
    matriz_transpuesta(3,2,matriz,matriz_t);
    printf("Matriz A:\n");
    print_matriz_double(3,2,matriz);
    printf("--o--o--o--o--\n");
    printf("Matriz A transpuesta:\n");
    print_matriz_double(2,3,matriz_t);
    return 0;
}