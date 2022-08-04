#include "../Biblioteca/inc/my_math.h"
#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char hex[] = "11A";
    int dec = 0;
    dec = hex_str_to_dec_rec(hex, my_strlen(hex), 0, 0);
    printf("hex: '%s'\ndec: %d", hex, dec);
    return 0;
}