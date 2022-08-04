#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char **str_arr, frutas[] = "Banana Frutilla Manzana Pera Durazno";
    int i = 0, cant_de_frutas = 0;
    str_arr = malloc(1 * sizeof(char *));
    cant_de_frutas = split(frutas, " ", str_arr);
    printf("%d\n", cant_de_frutas);
    for (int i = 0; i < cant_de_frutas; i++) printf("str_arr[%d]: %s\n", i, str_arr[i]);
    free_split(str_arr, cant_de_frutas);
    return 0;
}