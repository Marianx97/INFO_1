#include "../Biblioteca/inc/my_math.h"

int main (void) {
    double array[51], IN = 0;
    int contador = 0;
    array[50] = 0;
    printf("A continuacion podra cargar hasta 50 valores en el arreglo.\n");
    do {
        printf("Para finalizar la carga ingrese 0.\nIngrese un valor: ");
        scanf("%lf", &IN);
        array[contador] = IN;
        contador++;
    } while (IN != 0 && contador < 51);
    show_greater_average(array);
    return 0;
}