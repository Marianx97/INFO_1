#include "../Biblioteca/inc/my_string.h"

/*
    retorna:  0 si n caracteres en cada string son iguales
    retorna:  la diferencia numerica entre el valor de los caracteres si difieren s[i] - t[i]:
              - la misma sera negativa si, en el caracter que difieren str1[i] > str2[i]
              - la misma sera positiva si, en el caracter que difieren str1[i] < str2[i]
*/

int main (void) {
    char str1[] = "zorro", str2[] = "banana";
    int n = 3;
    printf("my_strncmp(str1, str1, n): %d\n", my_strncmp(str1, str1, n));
    printf("my_strncmp(str1, str2, n): %d\n", my_strncmp(str1, str2, n));
    printf("my_strncmp(str2, str1, n): %d\n", my_strncmp(str2, str1, n));
    return 0;
}
