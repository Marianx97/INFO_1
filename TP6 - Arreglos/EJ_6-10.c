#include "../Biblioteca/inc/my_vectors.h"

char * obtener_mes (t_mes, char[12][10]);

int main (void) {
    char meses[12][10] = {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };
    printf("%s\n", obtener_mes(FEBRERO, meses));
    return 0;
}

char * obtener_mes (t_mes mes, char meses[12][10]) {
    return meses[mes];
}