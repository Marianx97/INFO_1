#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    char legajos[70][9], apellidos[70][15], nombres_1[70][15], nombres_2[70][10];
    int notas[70], contador = 0;
    printf("A continuacion se ingresara un listado de alumnos. Para finalizar la carga, ingrese '99999999' como legajo.\n");
    do {
        cargar_alumno(legajos, apellidos, nombres_1, nombres_2, notas, contador);
        contador++;
    } while (contador < 70 && my_strcmp(legajos[contador - 1], "99999999") != 0);
    
    for (int i = 0; i < contador - 1; i++) print_alumno(legajos[i], apellidos[i], nombres_1[i], nombres_2[i], notas[i]);
    return 0;
}
