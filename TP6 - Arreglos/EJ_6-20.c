#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char string[30];
    int s_length = sizeof(string) / sizeof(char);
    random_load_reversal(string, s_length);
    return 0;
}