#include <stdio.h>
#include <stdlib.h>

int lanzar_dado (void);

int main (void) {
    int control = 0;
    do {
        printf("Desea lanzar el dado? (1. Si/ 2. No): "); scanf("%d", &control);
        if (control == 1) lanzar_dado();
    } while (control != 2);
    
    return 0;
}

int lanzar_dado() {
    printf("Salio %d\n", (rand() % 6) + 1);
    return 0;
}