#include <stdio.h>

int main (void) {
    int x1 = 0, x2 = 0; 
    printf("Se calculara una diferencia expresada como: x1 - x2\n");
    printf("Luego se indicara si el resultado de la diferencia es positivo, negativo o cero\n");
    printf("Introduzca el valor de x1: ");
    scanf("%d", &x1);
    printf("Introduzca el valor de x2: ");
    scanf("%d", &x2);
    if (x1 - x2 < 0) {
        printf("El resultado es negativo");
    } else if (x1 - x2 > 0) {
        printf("El resultado es positivo");
    } else {
        printf("El resultado es cero");
    }
    return 0;
}