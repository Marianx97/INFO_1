#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[] = "uppercase", str2[] = "LOWERCASE";
    printf("Antes:\nstr1: '%s' | str2: '%s'\n", str1, str2);
    change_case(str1, UPPERCASE); change_case(str2, LOWERCASE);
    printf("Despues:\nstr1: '%s' | str2: '%s'\n", str1, str2);
    return 0;
}