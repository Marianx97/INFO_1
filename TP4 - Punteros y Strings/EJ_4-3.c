#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char * string = "Hola!", * vacio = "";
    if (!empty_string(string)) printf("Este string no esta vacio: '%s'\n", string);
    if (empty_string(vacio)) printf("Este string esta vacio: '%s'\n", vacio);
    return 0;
}
