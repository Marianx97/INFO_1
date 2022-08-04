#include "../Biblioteca/inc/my_string.h"

/*
  retorna:  0 si los strings son iguales
  retorna:  1 si, en el primer caracter que difiere, str1[i] > str2[i]
  retorna: -1 si, en el primer caracter que difiere, str1[i] < str2[i]
*/

int main (void) {
    char str1[] = "zorro", str2[] = "banana";
    printf("my_strcmp(str1, str1): %d\n", my_strcmp(str1, str1));
    printf("my_strcmp(str1, str2): %d\n", my_strcmp(str1, str2));
    printf("my_strcmp(str2, str1): %d\n", my_strcmp(str2, str1));
    return 0;
}
