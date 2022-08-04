#include <stdio.h>

void imprimir_long (long *);

int main (void) {
    long valor = 0;
    printf("Ingrese un valor: "); scanf("%ld", &valor);
    imprimir_long(&valor);
    return 0;
} 

void imprimir_long (long * p) {
    char * c;
    c = (char *) p;
    for (int i = 0; i < sizeof(long); i++) printf("byte %d: %d\n", i + 1, c[i]);
}