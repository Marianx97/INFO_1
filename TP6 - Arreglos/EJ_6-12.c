#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double array[50], amplitud = 2, frecuencia = 5, phi = 0;
    int s_array = 50;
    sinu_samples(array, s_array, amplitud, frecuencia, phi);
    print_double_vector(array, s_array);
    return 0;
}