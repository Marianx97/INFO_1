#include <stdio.h>

int main (void) {
    int array[500], contador = 0, IN = 0;
    printf("A continuacion podra cargar hasta 50 valores en el arreglo.\n");
    do {
        printf("Para finalizar la carga ingrese un valor negativo.\nIngrese un valor: ");
        scanf("%d", &IN);
        array[contador] = IN;
        contador++;
    } while (0 <= IN && contador < 500);
    printf("De principio a fin:\n[");
    for (int i = 0; i < contador - 1; i++) printf("%d ", array[i]);
    printf("]\n");
    printf("De fin a principio:\n[");
    for (int i = contador - 2; 0 <= i; i--) printf("%d ", array[i]);
    printf("]");
}