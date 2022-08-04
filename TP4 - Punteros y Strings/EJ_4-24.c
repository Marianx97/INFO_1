#include "../Biblioteca/inc/my_date.h"

int main (void) {
    char fecha[] = "29/10/1997", fecha2[] = "Banana", fecha3[] = "asdfghjklp", fecha4[] = "31/04/2010";
    int valida = 0;
    valida = fecha_valida(fecha);
    if (valida == 1) printf("%s es una fecha valida.\n", fecha);
    valida = fecha_valida(fecha2);
    if (valida == -1) printf("fecha2 falla por longitud.\n");
    valida = fecha_valida(fecha3);
    if (valida == -2) printf("fecha3 falla por formato.\n");
    valida = fecha_valida(fecha4);
    if (valida == -3) printf("fecha4 falla por fecha no admitida.\n");
    return 0;
}
