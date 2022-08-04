#include <stdio.h>
#include <math.h>

int main (void) {
    int i = 0, resultado = 0;
    float R = 0, X = 0, Y = 0;
    printf("Se deberan cargar las coordenadas del disparo para calcular el puntaje.\n");
    for (i = 1; i <= 10; i++) {
        printf("Las coordenadas del tiro No %d son:\n", i);
        printf("X%d: ", i); scanf("%f", &X);
        printf("Y%d: ", i); scanf("%f", &Y);
        R = sqrt(X*X + Y*Y);
        if (0 <= R && R <= 1) resultado += 10;
        if (1 < R && R <= 5) resultado += 5;
        if (5 < R && R <= 10) resultado += 1;
    }
    printf("La puntuacion final es: %d", resultado);
    return 0;
}