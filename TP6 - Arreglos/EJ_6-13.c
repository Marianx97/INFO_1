#include "../Biblioteca/inc/my_math.h"

int main (void) {
    double coeficientes[] = { 2, 1, 0, 6 }, x = 1.4, resultado = 0;
    int grado = 3;
    resultado = polinomio_x(coeficientes, grado, x);
    printf("p(x) = 2 x^3 + x^2 + 6\np(%.1f) = %.4f\n", x, resultado);
    return 0;
}