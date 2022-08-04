#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[] = "TODO MAYUS", str2[] = "AlGuNaS mAyUs", str3[] = "sin mayus";
    printf("%s --> ", str1);
    my_strupr(str1);
    printf("%s\n", str1);
    printf("%s --> ", str2);
    my_strupr(str2);
    printf("%s\n", str2);
    printf("%s --> ", str3);
    my_strupr(str3);
    printf("%s\n", str3);
    return 0;
}
