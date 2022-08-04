#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[] = "", str2[] = "a", str3[] = "ab", str4[] = "bb", str5[] = "abc", str6[] = "bob",
    str7[] = "bono", str8[] = "abba", str9[] = "viejo", str10[] = "radar", str11[] = "vanesa",
    str12[] = "narran", str13[] = "miranda", str14[] = "neuquen";

    if (!es_palindromo(str1)) printf("'%s' no es palindromo.\n", str1);
    if (es_palindromo(str2)) printf("'%s' es palindromo.\n", str2);
    if (!es_palindromo(str3)) printf("'%s' no es palindromo.\n", str3);
    if (es_palindromo(str4)) printf("'%s' es palindromo.\n", str4);
    if (!es_palindromo(str5)) printf("'%s' no es palindromo.\n", str5);
    if (es_palindromo(str6)) printf("'%s' es palindromo.\n", str6);
    if (!es_palindromo(str7)) printf("'%s' no es palindromo.\n", str7);
    if (es_palindromo(str8)) printf("'%s' es palindromo.\n", str8);
    if (!es_palindromo(str9)) printf("'%s' no es palindromo.\n", str9);
    if (es_palindromo(str10)) printf("'%s' es palindromo.\n", str10);
    if (!es_palindromo(str11)) printf("'%s' no es palindromo.\n", str11);
    if (es_palindromo(str12)) printf("'%s' es palindromo.\n", str12);
    if (!es_palindromo(str13)) printf("'%s' no es palindromo.\n", str13);
    if (es_palindromo(str14)) printf("'%s' es palindromo.\n", str14);
    
    return 0;
}
