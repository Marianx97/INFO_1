#include "../Biblioteca/inc/my_math.h"

int main (void) {
    // maximo numero 511
    char number[] = "510";
    printf("Numero decimal: %s\n", number);
    dec_str_to_oct_str(number);
    printf("Numero octal: %s\n", number);
    return 0;
}