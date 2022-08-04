#include <stdio.h>

int main (void) {
    int cantidad_de_grupos = 0, i = 0;
    float promedio_total = 0, promedio_grupal = 0, IN = 0;
    do {
        printf("Ingrese un grupo de 5 valores. Si desea cerrar el programa ingrese -1.\n");
        printf("Ingrese el valor No 1 del grupo %d: ", cantidad_de_grupos + 1);
        scanf("%f", &IN);
        if (IN != -1) {
            cantidad_de_grupos++;
            promedio_grupal += IN;
            for (i = 2; i <= 5; i++) {
                printf("Ingrese el valor No %d del grupo %d: ", i, cantidad_de_grupos);
                scanf("%f", &IN);
                promedio_grupal += IN;
            }
            printf("El promedio del grupo No %d es %.2f\n", cantidad_de_grupos, promedio_grupal / 5);
            promedio_total += promedio_grupal;
            promedio_grupal = 0;
        }
    } while (IN != -1);
    if (cantidad_de_grupos) {
        printf("Se registraron %d grupos.\n", cantidad_de_grupos);
        printf("El promedio total es %2.f\n", promedio_total / (((float) cantidad_de_grupos) * 5.00));
    } else printf("No se registraron grupos de valores.\n");    
    return 0;
}