#include "../Biblioteca/inc/my_math.h"

int main (void) {
    int num = 3768, img_esp = 0;
    img_esp = img_especular(num, 0);
    printf("La imagen especular de %d es %d", num, img_esp);
    return 0;
}