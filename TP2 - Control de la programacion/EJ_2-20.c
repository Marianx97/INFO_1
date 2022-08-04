#include <stdio.h>

int main (void) {
    int lado_a = 0, lado_b = 0, lado_c = 0;
    printf("Este programa recibira 3 valores correspondientes a los lados de un triangulo y determinara si es Equilatero, Isoseles o Escaleno\n");
    printf("Ingrese el valor de lado a: ");
    scanf("%d", &lado_a);
    if (lado_a <= 0) {
        printf("Valor invalido!\nLos lados deben ser valores enteros positivos");
        return -1;
    }
    printf("Ingrese el valor de lado b: ");
    scanf("%d", &lado_b);
    if (lado_b <= 0) {
        printf("Valor invalido!\nLos lados deben ser valores enteros positivos");
        return -1;
    }
    printf("Ingrese el valor de lado c: ");
    scanf("%d", &lado_c);
    if (lado_c <= 0) {
        printf("Valor invalido!\nLos lados deben ser valores enteros positivos");
        return -1;
    }
    if ((lado_a + lado_b > lado_c) && (lado_a + lado_c > lado_b) && (lado_b + lado_c > lado_a)) {
        if (lado_a == lado_b && lado_b == lado_c) {
            printf("El triangulo es Equilatero");
        } else if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c) {
            printf("El triangulo es Isoseles");
        } else {
            printf("El triangulo es Escaleno\n");
            if (lado_a > lado_b && lado_a > lado_c) {
                if (lado_a * lado_a == lado_b * lado_b + lado_c * lado_c) {
                    printf("El triangulo es rectagulo y el lado a es la hipotenusa");
                }
            } else if (lado_b > lado_a && lado_b > lado_c) {
                if (lado_b * lado_b == lado_a * lado_a + lado_c * lado_c) {
                    printf("El triangulo es rectagulo y el lado b es la hipotenusa");
                }
            } else {
                if (lado_c * lado_c == lado_a * lado_a + lado_b * lado_b) {
                    printf("El triangulo es Rectagulo y el lado c es la hipotenusa");
                }
            }
        }
    } else {
        printf("Los valores ingresados para los lados no conforman un triangulo\n");
        printf("Para conformar un trangulo, la suma de dos lados debe ser mayor que el tercero para todos los casos");
    }    
    return 0;
}