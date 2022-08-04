#include <stdio.h>

int main (void) {
    int IN = 0, i = 0, a = 0, b = 0, c = 0, sumatoria = 0, factor = 1;
    printf("Ingrese un valor entero positivo: ");
    scanf("%d", &IN);
    if (IN <= 0) {
        printf("El valor ingresado debe ser positivo!\n");
        return -1;
    } else {
        for (i = 1; i <= IN; i++) {
            a = i;
            while (factor < a) {
                if (a % factor == 0) sumatoria += factor;
                factor++;
            }
            b = sumatoria;
            sumatoria = 0;
            factor = 1;
            while (factor < b) {
                if (b % factor == 0) sumatoria += factor;
                factor++;
            }
            c = sumatoria;
            sumatoria = 0;
            factor = 1;
            if (a == c && a != b) printf("%d y %d son numeros amigos.\n", a, b);
        }
    }
    return 0;
}

// while (factor < i) {
//     if (i % factor == 0) sumatoria += factor;
//     factor++;
// }