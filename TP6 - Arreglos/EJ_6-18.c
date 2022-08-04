#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char nombre[30], pelicula[50];
    int d_retraso = 0, recargo = 0;
    printf("Ingrese el nombre del cliente: ");
    fgets(nombre, 30, stdin);
    nombre[my_strlen(nombre) - 1] = '\0';
    printf("Ingrese el nombre de la pelicula: ");
    fgets(pelicula, 50, stdin);
    pelicula[my_strlen(pelicula) - 1] = '\0';
    printf("Ingrese la cantidad de dias de retraso: "); scanf("%d", &d_retraso);
    recargo = 4 * d_retraso;
    printf("--o--o--o--o--\n");
    printf("Cliente: %s\n", nombre);
    printf("Pelicula: %s\n", pelicula);
    printf("Recargo: ($)%d\n", recargo);
    return 0;
}