#include <stdio.h>

int main (void) {
    int t_introducida = 0, t_maxima = 0, t_mininima = 0, t_promedio = 0, acumulador = 0;
    printf("Se registraran 10 valores de temperatura capturados por el sensor.\n");
    for (int i = 1; i <= 10; i++) {
        printf("Ingrese el valor de temperatura Nro %d: ", i);
        scanf("%d", &t_introducida);
        if (t_introducida > t_maxima) t_maxima = t_introducida;
        if (i == 1) {
            t_mininima = t_introducida;
        } else {
            if (t_introducida < t_mininima) t_mininima = t_introducida;
        }
        if (t_introducida > 20 && t_introducida < 45) acumulador++;
        t_promedio += t_introducida;
    }
    printf("La temperatura promedio registrada fue: %d\n", t_promedio / 10);
    printf("La maxima temperatura registrada fue: %d\n", t_maxima);
    printf("La minima temperatura registrada fue: %d\n", t_mininima);
    printf("La cantidad de veces que la temperatura estuvo entre 20 y 45 fue: %d", acumulador);
    return 0;
}