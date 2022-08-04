#include "../Biblioteca/inc/my_math.h"

int main (void) {
    int base = 0, potencia = 0;
    printf("Ingrese un valor numerico: "); scanf("%d", &base);
    printf("Ingrese una potencia [entero natural]: "); scanf("%d", &potencia);
    if (potencia < 0) {
        printf("Error! %d no es un entero natural!", potencia);
        return -1;
    }
    printf("%d^%d = %d\n", base, potencia, int_my_pow(base, potencia));
    return 0;
}