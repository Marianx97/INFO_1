#include <stdio.h>

int main (void) {
    int lado_a = 0, lado_b = 0, lado_c = 0;
    printf("Este programa recibirá 3 valores correspondientes a los lados de un triangulo y determinara si es Equilatero, Isoseles o Escaleno\n");
    printf("Ingrese el valor de lado a: ");
    scanf("%d", &lado_a);
    printf("Ingrese el valor de lado b: ");
    scanf("%d", &lado_b);
    printf("Ingrese el valor de lado c: ");
    scanf("%d", &lado_c);
    if (lado_a == lado_b && lado_b == lado_c) {
        printf("El triangulo es Equilatero");
    } else if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c) {
        printf("El triangulo es Isoseles");
    } else {
        printf("El triangulo es Escaleno");
    }
    return 0;
}