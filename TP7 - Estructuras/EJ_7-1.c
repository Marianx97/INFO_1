#include "../Biblioteca/inc/my_math.h"

int main (void) {
    int dividendo = 0, divisor = 0;
    struct div_result resultado;
    printf("Ingrese el dividendo: "); scanf("%d", &dividendo);
    printf("Ingrese el divisor: "); scanf("%d", &divisor);
    resultado = cociente(dividendo, divisor);
    printf("El cociente de la division %d/%d es %d\n", dividendo, divisor, resultado.cociente);
    printf("El resto de la division %d/%d es %d\n", dividendo, divisor, resultado.resto);
    return 0;
}