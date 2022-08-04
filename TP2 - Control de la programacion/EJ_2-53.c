#include <stdio.h>

int main (void) {
    int i = 1, denominador = 3;
    float aproximacion_1 = 0, aproximacion_2 = 0, factorial = 2;
    aproximacion_1 = 1; // 1
    aproximacion_2 = 2; // 1 + 1/1! = 2
    printf("aproximacion_1: %f\n", aproximacion_1);
    printf("aproximacion_2: %f\n", aproximacion_2);
    printf("denominador: %d\n", denominador);
    printf("factorial: %f\n", factorial);
    while (aproximacion_1 != aproximacion_2) {
        aproximacion_1 = aproximacion_2;
        aproximacion_2 += 1/factorial;
        factorial = 1;
        for (i = 1; i <= denominador; i++) factorial *= i;
        denominador++;
        printf("aproximacion_1: %f\n", aproximacion_1);
        printf("aproximacion_2: %f\n", aproximacion_2);
        printf("denominador: %d\n", denominador);
        printf("factorial: %f\n", factorial);
    }    
    return 0;
}
