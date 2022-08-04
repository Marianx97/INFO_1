#include <stdio.h>

int main (void) {
    int valor = 0;
    printf("Se recibira un valor entero positivo (x > 0) por consola y se determinara si es par o impar.\nIngrese el valor: ");
    scanf("%d", &valor);
    valor % 2 ? printf("El valor es impar.") : printf("El valor es par.");
    return 0;
}