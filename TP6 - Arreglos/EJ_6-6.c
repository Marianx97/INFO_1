#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    int array[100], contador = 0, IN = 0, c_pares = 0, c_impares = 0, c_negativos = 0, c_positivos = 0;
    printf("A continuacion podra cargar hasta 100 valores en el arreglo.\n");
    do {
        printf("Para finalizar la carga ingrese un 0.\nIngrese un valor: ");
        scanf("%d", &IN);
        array[contador] = IN;
        contador++;
        if (IN % 2 == 0) c_pares++;
        if (IN % 2 != 0) c_impares++;
        if (IN < 0) c_negativos++;
        if (IN > 0) c_positivos++;
    } while (IN != 0 && contador < 100);
    int arr_pares[c_pares], arr_impares[c_impares], arr_negativos[c_negativos], arr_positivos[c_positivos];
    pares(array, contador, arr_pares);
    int_arr_order(arr_pares, c_pares, ASC);
    impares(array, contador, arr_impares);
    int_arr_order(arr_impares, c_impares, DESC);
    negativos(array, contador, arr_negativos);
    int_arr_order(arr_negativos, c_negativos, DESC);
    positivos(array, contador, arr_positivos);
    int_arr_order(arr_positivos, c_positivos, ASC);
    print_vectores(arr_pares, c_pares, arr_impares, c_impares, arr_negativos, c_negativos, arr_positivos, c_positivos);
    return 0;
}