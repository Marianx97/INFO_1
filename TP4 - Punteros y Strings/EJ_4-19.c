#include <stdio.h>

void entero_decimal (float, int *, float *);

int main (void) {
    float valor = 127.49147, decimal = 0;
    int entero = 0;
    entero_decimal(valor, &entero, &decimal);
    printf("valor: %.5f | entero: %d | decimal: %.5f\n", valor, entero, decimal);
    return 0;
}

void entero_decimal (float valor, int * entero, float * decimal) {
    *entero = (int) valor;
    *decimal = valor - (float) ((int) valor);
}

/*
La funcion recibe un valor real (float) y 2 direcciones de memoria, donde almacenara
la parte entera y la parte decimal.
El return de la funcion es de tipo void ya que no retorna en si los valores, sino
que los asigna dentro de las posiciones de memoria que se le pasaron a la funcion.
*/