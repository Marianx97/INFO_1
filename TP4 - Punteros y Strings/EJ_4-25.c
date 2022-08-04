#include "../Biblioteca/inc/my_math.h"

int main (void) {
    float x1 = 0, y1 = 0, x2 = 5, y2 = 7, distancia = 0;
    distancia = dist(x1, y1, x2, y2);
    printf("La distancia entre (%.2f;%.2f) y (%.2f;%.2f) es %.2f\n", x1, y1, x2, y2, distancia);
    return 0;
}