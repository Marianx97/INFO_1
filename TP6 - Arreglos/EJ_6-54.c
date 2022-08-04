#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    int array[] = { 3, 7, 4, 1, 10, 2 };
    int s_array = sizeof(array) / sizeof(int);
    printf("Antes de ordenar:\n");
    for (int i = 0; i < s_array; i++) printf("%d ", array[i]);
    sort(array, s_array, seleccion, ASC);
    printf("\nDespues de ordenar:\n");
    for (int i = 0; i < s_array; i++) printf("%d ", array[i]);
    return 0;
}