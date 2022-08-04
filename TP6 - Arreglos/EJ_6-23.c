#include "../Biblioteca/inc/my_string.h"

int main (void) {
    float valor = 1436.89;
    char * string;
    ftoa(valor, string);
    printf("%s\n", string);
    return 0;
}