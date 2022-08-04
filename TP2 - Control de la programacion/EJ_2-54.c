#include <stdio.h>

int main (void) {
    int c_elementos = 0, i = 0;
    float IN = 0, maximo = 0, minimo = 0;

    printf("Se ingresara una serie de valores numéricos y el programa determinara los valores maximo y minimo.\n");
    printf("Ingrese la cantidad de elementos a procesar: ");
    scanf("%d", &c_elementos);

    for (i = 0; i < c_elementos; i++) {
        printf("Ingrese un valor: ");
        scanf("%f", &IN);
        if (i == 0) {
            maximo = IN;
            minimo = IN;
        } else {
            if (maximo < IN) maximo = IN;
            if (IN < minimo) minimo = IN;
        }
    }
    printf("El valor maximo de la serie es: %.3f\n", maximo);
    printf("El valor minimo de la serie es: %.3f\n", minimo);
    return 0;
}