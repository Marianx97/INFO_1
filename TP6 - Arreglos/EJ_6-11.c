#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    int s_array = 10, array[s_array], extremo = 15000;
    random_initialize(array, s_array, extremo);
    for (int i = 0; i < s_array; i++) printf("%d ", array[i]);
    return 0;
}