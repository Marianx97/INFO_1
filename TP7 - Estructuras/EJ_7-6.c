#include "../Biblioteca/inc/my_math.h"

int main (void) {
    struct cmplx_num z1, z2, z3, suma, resta, multiplicacion, division, potencia;
    z1 = assign_cmplx_number(REC, 2, -3);
    z2 = assign_cmplx_number(POL, 5, 0.6435);
    z3 = assign_cmplx_number(REC, 2, 0);
    suma = cmplx_suma(z1, z2);
    resta = cmplx_resta(z1, z2);
    multiplicacion = cmplx_mul(z1, z3);
    division = cmplx_div(z2, z3);
    potencia = cmplx_pow(z1, 2);
    printf("En coordenadas binomicas:\n");
    printf("Z1 = "); print_cmplx(z1, REC); printf("\n");
    printf("Z2 = "); print_cmplx(z2, REC); printf("\n");
    printf("Z3 = "); print_cmplx(z3, REC); printf("\n");
    printf("Z1 + Z2 = "); print_cmplx(suma, REC); printf("\n");
    printf("Z1 - Z2 = "); print_cmplx(resta, REC); printf("\n");
    printf("Z1 * 2 = "); print_cmplx(multiplicacion, REC); printf("\n");
    printf("Z2 / 2 = "); print_cmplx(division, REC); printf("\n");
    printf("Z1 ^ 2 = "); print_cmplx(potencia, REC); printf("\n");
    printf("---o---o---o---o---\n");
    printf("En coordenadas polares:\n");
    printf("Z1 = "); print_cmplx(z1, POL); printf("\n");
    printf("Z2 = "); print_cmplx(z2, POL); printf("\n");
    printf("Z3 = "); print_cmplx(z3, POL); printf("\n");
    printf("Z1 + Z2 = "); print_cmplx(suma, POL); printf("\n");
    printf("Z1 - Z2 = "); print_cmplx(resta, POL); printf("\n");
    printf("Z1 * 2 = "); print_cmplx(multiplicacion, POL); printf("\n");
    printf("Z2 / 2 = "); print_cmplx(division, POL); printf("\n");
    printf("Z1 ^ 2 = "); print_cmplx(potencia, POL); printf("\n");
    return 0;
}