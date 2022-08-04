#include <stdio.h>

void suma_por_referencias (float **, float *);

int main (void) {
    float *p_arr[10], arr[] = { 62, 85, 35, 99, 88, 56, 96, 48, 32, 75 }, valor = 0;
    for (int i = 0; i < 10; i++) p_arr[i] = &arr[i];
    suma_por_referencias(p_arr, &valor);
    printf("La suma de los valores es: %.f\n", valor);
    printf("Direccion | Contenido\n");
    for (int i = 0; i < 10; i++) printf("%d   | %.f\n", p_arr[i], *p_arr[i]);
    printf("%d   | %.f\n", &valor, valor);
    return 0;
}

void suma_por_referencias (float ** p_arr, float * resultado) {
    for (int i = 0; i < 10; i++) *resultado += *p_arr[i];
}