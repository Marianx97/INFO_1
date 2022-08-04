#include <stdio.h>

int main (void) {
    int i = 0;
    float N = 0;
    printf("Por favor, ingrese un valor para ser procesado: ");
    scanf("%f", &N);
    for(i = 0; i <= 10; i++) printf("1 + %d * %.2f = %.2f\n", i, N, (1 + i * N));
    return 0;
}