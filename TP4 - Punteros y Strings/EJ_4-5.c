#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char string[] = "Hola mundo";
    printf("La longitud del string '%s' es %d.\n", string, my_strlen(string));
    return 0;
}
