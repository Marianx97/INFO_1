#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double coeficientes[] = { 2, 1, 0, 6 }, muestras[10], inicio = -2, fin = 2;
    int grado = 3, s_array = 10;
    poli_samples(muestras, s_array, inicio, fin, coeficientes, grado);
    print_double_vector(muestras, s_array);
    return 0;
}