#include <stdio.h>
#include <stdbool.h>

int main (void) {
    int IN = 1, valor_previo = 0;
    bool es_creciente = true;

    printf("Ingrese una serie de numeros enteros y positivos. El programa verificara si fueron ingresados en orden creciente.\n");
    do {
        printf("Para finalizar el programa ingrese un 0.\nIngrese un numero: ");
        scanf("%d", &IN);
        if (IN < 0) {
            printf("El valor ingresado debe ser mayor a 0. Cerrando el programa.\n");
            return -1;
        } else if (IN > 0) {
            if (IN < valor_previo) es_creciente = false;
            valor_previo = IN;
        }
    } while (IN != 0);
    if (valor_previo == 0) printf("No se han ingresado valores en la serie.\n");
    else {
        if (es_creciente) printf("La serie es estrictamente creciente.\n");
        else printf("La serie no es estrictamente creciente.\n");  
    }
    return 0;
}