#include "../Biblioteca/inc/my_date.h"

int main (void) {
    char time[] = "12:25 PM";
    printf("Horario en formato 12Hs: %s\n", time);
    convert_time_format(time, HFMT24);
    // printf("Sigue siendo formato 12Hs: %s\n", time);
    printf("Ahora es formato 24Hs: %s\n", time);
    return 0;
}