#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double matriz_a[2][2] = {
        {1,1},
        {0,1}
    }, matriz_b[2][2] = {
        {1,0},
        {1,1}
    }, m_mul[2][2];
    mul_matrices(2, 2, matriz_a, 2, 2, matriz_b, m_mul);
    printf("Matriz A:\n");
    print_matriz_double(2,2,matriz_a);
    printf("--o--o--o--o--\n");
    printf("Matriz B:\n");
    print_matriz_double(2,2,matriz_b);
    printf("--o--o--o--o--\n");
    printf("A . B:\n");
    print_matriz_double(2,2,m_mul);
    printf("--o--o--o--o--\n");
    return 0;
}