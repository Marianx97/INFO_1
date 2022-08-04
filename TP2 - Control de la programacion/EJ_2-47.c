#include <stdio.h>
#include <math.h>

int main (void) {
    int X = 0, Y = 0, c_cuadrante_1 = 0, c_cuadrante_2 = 0, c_cuadrante_3 = 0, c_cuadrante_4 = 0;
    float sumatoria = 0;
    printf("Se ingresaran por consola pares de valores enteros que representan coordenadas cartesianas. El ingreso de valores finaliza cuando se ingresa (X;Y) = (0;0)\n");
    do {
        printf("Ingrese el valor de X: ");
        scanf("%d", &X);
        printf("Ingrese el valor de Y: ");
        scanf("%d", &Y);
        if (X > 0 && Y > 0) {
            c_cuadrante_1++;
            sumatoria += sqrt(X*X + Y*Y);
        }
        else if (X < 0 && Y > 0) c_cuadrante_2++;
        else if (X < 0 && Y < 0) c_cuadrante_3++;
        else if (X > 0 && Y < 0) c_cuadrante_4++;
    } while (X != 0 && Y != 0);
    printf("Se registraron %d puntos en el cuadrante 1\n", c_cuadrante_1);
    printf("Se registraron %d puntos en el cuadrante 2\n", c_cuadrante_2);
    printf("Se registraron %d puntos en el cuadrante 3\n", c_cuadrante_3);
    printf("Se registraron %d puntos en el cuadrante 4\n", c_cuadrante_4);
    printf("La sumatoria de las distancias al origen de los puntos pertenecientes al primer cuadrante es: %.2f", sumatoria);
    return 0;
}