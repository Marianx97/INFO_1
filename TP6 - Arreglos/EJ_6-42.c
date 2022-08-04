#include "../Biblioteca/inc/my_vectors.h"

int main (void) {
    int i_max_enteros = 0, i_min_enteros = 0, s_enteros = 0,
    i_max_reales = 0, i_min_reales = 0, s_reales = 0;
    printf("Ingrese la cantidad de valores enteros que va a registrar: "); scanf("%d", &s_enteros);
    int enteros[s_enteros], max_enteros = 0, min_enteros = 0;
    scan_int_vector(enteros, s_enteros);
    printf("Ingrese la cantidad de valores reales que va a registrar: "); scanf("%d", &s_reales);
    double reales[s_reales], max_reales = 0, min_reales = 0;
    scan_double_vector(reales, s_reales);
    min_enteros = obtener_extremo_int(enteros, s_enteros, &i_min_enteros, MINIMO);
    max_enteros = obtener_extremo_int(enteros, s_enteros, &i_max_enteros, MAXIMO);
    min_reales = obtener_extremo_double(reales, s_reales, &i_min_reales, MINIMO);
    max_reales = obtener_extremo_double(reales, s_reales, &i_max_reales, MAXIMO);
    printf("El maximo valor entero es %d y se registro en la posicion %d del arreglo.\n", max_enteros, i_max_enteros);
    printf("El minimo valor entero es %d y se registro en la posicion %d del arreglo.\n", min_enteros, i_min_enteros);
    printf("El maximo valor real es %.2f y se registro en la posicion %d del arreglo.\n", max_reales, i_max_reales);
    printf("El minimo valor real es %.2f y se registro en la posicion %d del arreglo.\n", min_reales, i_min_reales);
    return 0;
}