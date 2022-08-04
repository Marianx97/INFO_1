#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[] = "Banana", str2[] = "ana", str3[] = "carro";
    if (str_includes(str1, str2)) printf("'%s' incluye '%s'\n", str1, str2);
    if (!str_includes(str1, str3)) printf("'%s' no incluye '%s'\n", str1, str3);
    return 0;
}