#include <stdio.h>

int potencia (int, int);

int main (void) {
    int base = 0, exponente = 0;
    printf("Ingrese un valor entero como base: "); scanf("%d", &base);
    printf("Ingrese un valor entero como exponente: "); scanf("%d", &exponente);
    if (exponente < 0) {
        printf("Solo calculamos exponentes positivos, lo siento.\n");
        return -1;
    }
    
    printf("%d elevado a la %d es igual a %d", base, exponente, potencia(base, exponente));
    return 0;
}

int potencia (int base, int exponente) {
    int resultado = 1;
    if (exponente == 0) return 1;

    for (int i = 0; i < exponente; i++) {
        resultado *= base; 
    }
    return resultado;
}