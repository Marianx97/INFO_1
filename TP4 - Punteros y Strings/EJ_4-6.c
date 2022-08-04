#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[] = "Buenos dias", str2[]="Hola", str3[] = "Buenas noches";
    printf("Se puede copiar en el destino un string mas corto que el que existia originalmente.\n");
    printf("Antes de la copia:\nstr1: '%s' | str2: '%s'\n", str1, str2);
    my_strcpy(str1, str2);
    printf("Despues de la copia:\nstr1: '%s' | str2: '%s'\n", str1, str2);
    printf("Se puede copiar en el destino un string mas largo que el que existia originalmente.\n");
    printf("Antes de la copia:\nstr1: '%s' | str3: '%s'\n", str1, str3);
    my_strcpy(str1, str3);
    printf("Despues de la copia:\nstr1: '%s' | str3: '%s'\n", str1, str3);
    return 0;
}
