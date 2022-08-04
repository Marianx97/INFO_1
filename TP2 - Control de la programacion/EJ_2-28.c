#include <stdio.h>
#include <math.h>

int main (void) {
    float A = 0, B = 0, C = 0;
    printf("Ingrese los valores de los coeficientes A, B y C correspondientes a una ecuacion cuadratica y el programa calculara sus raices.\n");
    printf("Ingrese el valor de A: ");
    scanf("%f", &A);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);
    printf("Ingrese el valor de C: ");
    scanf("%f", &C);
    if (A) {
        if (pow(B, 2) < 4 * A * C) {
            printf("X1 = %.2f + j %.2f\n", -B/(2*A), sqrt(-pow(B, 2) + 4 * A * C));
            printf("X2 = %.2f - j %.2f\n", -B/(2*A), sqrt(-pow(B, 2) + 4 * A * C));
        } else {
            printf("X1 = %.2f\n", (-B + sqrt(pow(B, 2) - 4 * A * C))/(2*A));
            printf("X2 = %.2f\n", (-B - sqrt(pow(B, 2) - 4 * A * C))/(2*A));
        }
    } else {
        printf("La funcion no es cuadratica puesto que A es cero.\n");
        printf("La funcion es de tipo lineal con forma f(X) = B . X + C\n");
        printf("El punto para el cual la funcion atraviesa el eje de abscisas corresponde a f(X) / B . X + C = 0\n");
        printf("X = %.2f", -C/B);
    }
    return 0;
}