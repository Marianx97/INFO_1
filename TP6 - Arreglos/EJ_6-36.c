#include "../Biblioteca/inc/my_temp.h"

int main (void) {
    char v_temp1[] = "27 C", v_temp2[] = "300.15 K", v_temp3[] = "80.6 F", iv_temp[] = " 1545 C";
    print_temp_convertion(v_temp1);
    print_temp_convertion(v_temp2);
    print_temp_convertion(v_temp3);
    print_temp_convertion(iv_temp);
    return 0;
}