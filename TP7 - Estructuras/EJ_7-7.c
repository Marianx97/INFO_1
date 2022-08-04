#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    struct alumno alumnos[30], * puntero;
    int c_alumnos = 4;
    puntero = alumnos;
    cargar_alumnos_struct(puntero);
    ordenar_alumnos_struct(alumnos, c_alumnos, DESC);
    print_alumnos_struct(puntero, c_alumnos, stdout);
    return 0;
}