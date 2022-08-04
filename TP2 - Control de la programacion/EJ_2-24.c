#include <stdio.h>

int main (void) {
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0, op = 0;
    printf("Este programa operara como calculadora de numeros complejos y permitira realizar operaciones con la forma: C1 op C2\n");
    printf("Donde C1 y C2 son valores complejos con forma (x1 + j y1) y (x2 + j y2), respectivamente; mientras que op indica el tipo de operacion correspondiente.\n");
    printf("Se debera ingresar (+) para la suma, (-) para la resta, (*) para la multiplicacion y (/) para la division\n");
    printf("Seleccione la operacion.\nop: ");
    scanf("%c", &op);
    printf("Ingrese la parte REAL de C1: ");
    scanf("%d", &x1);
    printf("Ingrese la parte IMAGINARIA de C1: ");
    scanf("%d", &y1);
    printf("Ingrese la parte REAL de C2: ");
    scanf("%d", &x2);
    printf("Ingrese la parte IMAGINARIA de C2: ");
    scanf("%d", &y2);
    
    switch (op) {
    // el caracter '+' equivale numericamente a 43
    case 43:
        printf("(%d + j %d) + (%d + j %d) = %d + j %d", x1, y1, x2, y2, x1 + x2, y1 + y2);
        break;
    // el caracter '-' equivale numericamente a 45
    case 45:
        printf("(%d + j %d) - (%d + j %d) = %d + j %d", x1, y1, x2, y2, x1 - x2, y1 - y2);
        break;
    // el caracter '*' equivale numericamente a 42
    case 42:
        printf("(%d + j %d) * (%d + j %d) = %d + j %d", x1, y1, x2, y2, (x1 * x2 - y1 * y2 ), ( x1 * y2 + y1 * x2));
        break;
    // el caracter '/' equivale numericamente a 47
    case 47:
        if (x2 || y2) {
            printf("(%d + j %d) / (%d + j %d) = %d + j %d", x1, y1, x2, y2, ((x1*x2+y1*y2)/(x2*x2+y2*y2)), ((y1*x2-x1*y2)/(x2*x2+y2*y2)));
        } else {
            printf("Operacion NO valida!\n    Division por cero.");
        }
        break;
    default:
        printf("Operacion NO valida!");
        break;
    }
    return 0;
}