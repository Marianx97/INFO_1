#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[] = "Hola ", str2[] = "Mundo!";
    printf("str1: %s\nstr2: %s\n", str1, str2);
    my_strcat(str1, str2);
    printf("str1: %s\n", str1);
    return 0;
}
