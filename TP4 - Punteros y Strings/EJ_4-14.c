#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str[] = "Banana";
    printf("Antes: '%s'\n", str);
    replace(str, 'o', 'a');
    printf("Despues: '%s'\n", str);
    return 0;
}