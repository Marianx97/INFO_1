#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[] = "Banana ", str2[] = "Manzana    ";
    printf("Antes:\nstr1: '%s' | str2: '%s'\n", str1, str2);
    right_trim(str1); right_trim(str2);
    printf("Despues:\nstr1: '%s' | str2: '%s'\n", str1, str2);
    return 0;
}