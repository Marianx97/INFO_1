#include <stdio.h>

int main (void) {
    int x1 = 0, x2 = 0, op = 0;
    printf("Se introducira una operacion con la siguiente forma: x1 op x2\n");
    printf("Donde x1 y x2 son el primer y segundo miembro de la operaci0n, respectivamente.\n");
    printf("Y donde op indica el tipo de operacion correspondiente.\n");
    printf("Se debera ingresar (+) para la suma, (-) para la resta, (*) para la multiplicacion y (/) para la division\n");
    printf("Seleccione la operacion.\nop: ");
    scanf("%c", &op);
    printf("Ingrese el valor de x1: ");
    scanf("%d", &x1);
    printf("Ingrese el valor de x2: ");
    scanf("%d", &x2);
    switch (op) {
    // el caracter '+' equivale numericamente a 43
    case 43:
        printf("%d + %d = %d", x1, x2, x1 + x2);
        break;
    // el caracter '-' equivale numericamente a 45
    case 45:
        printf("%d - %d = %d", x1, x2, x1 - x2);
        break;
    // el caracter '*' equivale numericamente a 42
    case 42:
        printf("%d * %d = %d", x1, x2, x1 * x2);
        break;
    // el caracter '/' equivale numericamente a 47
    case 47:
        printf("%d / %d = %d", x1, x2, x1 / x2);
        break;
    default:
        printf("Operacion NO valida!");
        break;
    }
    return 0;
}