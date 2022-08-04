#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char num_str_1[] = "1500", num_str_2[] = "27", num_str_3[] = "200",
    num_str_4[] = "15.61", num_str_5[] = "3.14", num_str_6[] = "10.0";
    if (int_strcmp(num_str_1, num_str_1) == 0) printf("%s = %s\n", num_str_1, num_str_1);
    if (int_strcmp(num_str_1, num_str_2) == -1) printf("%s > %s\n", num_str_1, num_str_2);
    if (int_strcmp(num_str_2, num_str_3) == 1) printf("%s < %s\n", num_str_2, num_str_3);
    if (float_strcmp(num_str_4, num_str_4) == 0) printf("%s = %s\n", num_str_4, num_str_4);
    if (float_strcmp(num_str_4, num_str_5) == -1) printf("%s > %s\n", num_str_4, num_str_5);
    if (float_strcmp(num_str_5, num_str_6) == 1) printf("%s < %s\n", num_str_5, num_str_6);
    return 0;
}