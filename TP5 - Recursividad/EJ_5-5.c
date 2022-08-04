#include "../Biblioteca/inc/my_math.h"

int main (void) {
    int a = 0, b = 0;
    printf("Ingrese el factor a: "); scanf("%d", &a);
    printf("Ingrese el factor b: "); scanf("%d", &b);
    printf("%d*%d = %d\n", a, b, my_mul(a, b));
    return 0;
}