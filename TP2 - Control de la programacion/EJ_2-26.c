#include <stdio.h>
#include <math.h>

int main (void) {
    float x = 0, y = 0;
    printf("Se ingresaran por consola pares ordenados (x;y) y se determinara el cuadrante al que pertenece el punto y la distancia respecto al origen.\n");
    printf("Ingrese el valor de x: ");
    scanf("%f", &x);
    printf("Ingrese el valor de y: ");
    scanf("%f", &y);
    if (x > 0 && y > 0) printf("Las coordenadas pertenecen al primer cuadrante.\n");
    if (x < 0 && y > 0) printf("Las coordenadas pertenecen al segundo cuadrante.\n");
    if (x < 0 && y < 0) printf("Las coordenadas pertenecen al tercer cuadrante.\n");
    if (x > 0 && y < 0) printf("Las coordenadas pertenecen al cuarto cuadrante.\n");
    printf("La distancia respecto al origen es: %.2f", sqrt(pow(x, 2) + pow(y, 2)));
    return 0;
}