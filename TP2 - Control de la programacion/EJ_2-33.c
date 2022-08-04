#include <stdio.h>

int main (void) {
    int i = 0;
    float in = 0, resultado = 0;
    printf("Se calculara el promedio de 10 valores ingresados por teclado.\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese el valor No %d: ", i);
        scanf("%f", &in);
        resultado += in;
    }
    printf("El promedio de los valores ingresados es: %.2f", resultado / 10);
    return 0;
}