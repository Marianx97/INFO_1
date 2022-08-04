#include <stdio.h>

int main (void) {
    int codigo = 0, c_promedio = 0;
    float real = 0, sumatoria = 0, productoria = 1, promedio = 0;
    printf("Se ingresaran pares de valores numericos. El primero indica un codigo, que puede ser [1, 2, 3, 4], y el segundo será un valor real.\n");
    printf("Se realizara la sumatoria de los numeros ingresados con codigo 1.\n");
    printf("Se realizara la productoria de los numeros ingresados con codigo 2.\n");
    printf("Se realizara el promedio de los numeros ingresados con codigo 3.\n");
    printf("Ingresar el codigo 4 indicara el final de la carga de datos.\n");
    do {
        printf("Ingrese el codigo: ");
        scanf("%d", &codigo);
        switch (codigo) {
        case 1:
            printf("Ingrese el valor real: ");
            scanf("%f", &real);
            sumatoria += real;
            break;
        case 2:
            printf("Ingrese el valor real: ");
            scanf("%f", &real);
            productoria *= real;
            break;
        case 3:
            printf("Ingrese el valor real: ");
            scanf("%f", &real);
            promedio += real;
            c_promedio++;
            break;
        case 4:
            printf("Fin de carga de valores.\n");
            break;
        }
    } while (codigo != 4);
    printf("La sumatoria de los valores con codigo 1 es: %.2f\n", sumatoria);
    printf("La productoria de los valores con codigo 2 es: %.2f\n", productoria);
    printf("El promedio de los valores ingresados con codigo 3 es: %.2f\n", promedio / c_promedio);
    return 0;
}