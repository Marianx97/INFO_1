#include <stdio.h>

int main (void) {
    int a = 0, b = 0, c = 0;
    printf("Ingrese el valor de la variable A : ");
    scanf("%d", &a);
    printf("Ingrese el valor de la variable B : ");
    scanf("%d", &b);
    printf("Intercambiaremos los valores de A y B");
    c = a;
    a = b;
    b = c;
    printf("\nActualmente A vale: %d\nActualmente B vale: %d", a, b);
    return 0;
}