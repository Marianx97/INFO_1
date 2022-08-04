#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    int array[] = { 3, 7, 4, 1, 10, 2 };
    int s_array = sizeof(array) / sizeof(int);
    
    // quicksort(array, 0, s_array -1, DESC);
    // burbuja(array, s_array, DESC);
    // burbuja_m(array, s_array, DESC);
    // seleccion(array, s_array, DESC);
    for (int i = 0; i < s_array; i++) printf("%d ", array[i]);
    return 0;
}