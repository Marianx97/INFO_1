#include "../Biblioteca/inc/my_math.h"

int main (void) {
    for (int i = 1; i <= 10; i++) printf("El elemento No %d de la serie de fibonacci es %d.\n", i, fibonacci(i));
    return 0;
}