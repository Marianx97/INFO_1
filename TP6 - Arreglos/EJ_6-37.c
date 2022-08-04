#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    int N = 0;
    printf("Ingrese la cantidad de numeros que se van a registrar: "); scanf("%d", &N);
    int nros[N];
    scan_int_vector(nros, N);
    print_int_vector(nros, N);
    return 0;
}