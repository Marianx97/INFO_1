#include <stdio.h>

int main (void) {
    int i = 0, N = 0;
    printf("Ingrese un numero entero y mayor a 1 y el programa determinara si es un numero primo: ");
    scanf("%d", &N);
    if (N <= 1) {
        printf("El valor debe ser mayor a 1\n");
        return -1;
    }
    for (i = 2; i <= N; i++)
    {
        if ((i != N) && N % i == 0) {
            printf("%d no es un numero primo.\n", N);
            return 1;
        }
    }
    printf("%d es un numero primo.\n", N);
    return 0;
}