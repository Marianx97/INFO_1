#include "../Biblioteca/inc/my_math.h"

int main (void) {
    // maximo numero 511
    char number[] = "510";
    printf("Numero decimal: %s\n", number);
    dec_str_to_hex_str(number);
    printf("Numero hexadecimal: %s\n", number);
    return 0;
}