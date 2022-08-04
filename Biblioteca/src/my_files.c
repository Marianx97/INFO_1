#include "../inc/my_files.h"

void print_plain_strings(FILE * file, char string [], size_t l_str) {
    fputs(string, file);
    return;
}