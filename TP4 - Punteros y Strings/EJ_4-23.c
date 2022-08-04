#include "../Biblioteca/inc/my_date.h"

int main (void) {
    int total_segundos = 0, hh = 0, mm = 0, ss = 0;
    printf("Ingrese una cantidad de segundos: "); scanf("%d", &total_segundos);
    seg_to_hhmmss(total_segundos, &hh, &mm, &ss);
    printf("%d segundos equivale a %d horas, %d minutos con %d segundos.\n", total_segundos, hh, mm, ss);
    return 0;
}