#include "../Biblioteca/inc/my_math.h"

int main (void ) {
    double x = 2.6, y = 4, a_tan = 0;
    a_tan = atan(y/x);
    printf("El arco tangente de %.2f/%.2f es: %.4f radianes\n", y, x, a_tan);
    printf("Que se traduce como %.4f grados\n", rad_to_sexagesimal(a_tan));
    return 0;
}