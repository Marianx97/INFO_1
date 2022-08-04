#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    double array[] = { 3, 7, 4, 1, 10, 2 };
    int arr_len = sizeof(array) / sizeof(double);
    double_arr_order(array, arr_len, ASC);
    for (int i = 0; i < arr_len; i++) printf("%.f ", array[i]);
    return 0;
}