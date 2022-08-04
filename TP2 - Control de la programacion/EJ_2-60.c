#include <stdio.h>

int main (void) {
    int IN = 0, i = 1, resultado = 0, resto = 0;
    printf("Ingrese un valor positivo entero: ");
    scanf("%d", &IN);
    if (IN <= 0) {
        printf("El valor debe ser ENTERO y POSITIVO.");
        return -1;
    }    
    do {
        resto = IN % 10;
        resultado *= 10;
        resultado += resto;
        IN /= 10;
    } while (IN > 0);
    printf("%d\n", resultado);
    return 0;
}
