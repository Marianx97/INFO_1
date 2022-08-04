#include <stdio.h>
#include <math.h>

int main (void) {
    int c_imaginarias = 0;
    float A = 0, B = 0, C = 0;
    
    do {
        printf("Ingrese los valores de los coeficientes A, B y C correspondientes a una ecuacion cuadratica.\n");
        do {
            printf("Ingrese el valor de A: ");
            scanf("%f", &A);
            if (!A) printf("A no puede ser 0.\n");
        } while (!A);

        printf("Ingrese el valor de B: ");
        scanf("%f", &B);
        printf("Ingrese el valor de C: ");
        scanf("%f", &C);
        if (pow(B, 2) < 4 * A * C) {
            printf("X1 = %.2f + j %.2f\n", -B/(2*A), sqrt(-pow(B, 2) + 4 * A * C));
            printf("X2 = %.2f - j %.2f\n", -B/(2*A), sqrt(-pow(B, 2) + 4 * A * C));
            c_imaginarias++;
        } else {
            printf("X1 = %.2f\n", (-B + sqrt(pow(B, 2) - 4 * A * C))/(2*A));
            printf("X2 = %.2f\n", (-B - sqrt(pow(B, 2) - 4 * A * C))/(2*A));
        }
    } while (c_imaginarias < 2);    
    return 0;
}