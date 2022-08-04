#include "../Biblioteca/inc/my_vectors.h"
#include <time.h>

// PENDIENTE

int main (void) {
    srand(time(NULL));
    int nros_posibles[10] = {0,1,2,3,4,5,6,7,8,9}, intentos[10][4], n_intentos = 0, correcto = 0,
    numero = 0, bien = 0, regular = 0;
    do {
        for (int i = 0; i < 4; i++) {
            do numero = nros_posibles[rand() % 10]; while (numero > 9);
            intentos[n_intentos][i] = numero;
        }

        printf("Intento %d: ", n_intentos+1); print_int_vector(intentos[n_intentos], 4);
        printf("Regular: "); scanf("%d", &regular);
        printf("Bien: "); scanf("%d", &bien);
        if (bien < 4) {
            // ninguno de los valores ingresados es correcto
            if (regular == 0 && bien == 0) for (int j = 0; j < 4; j++) nros_posibles[intentos[n_intentos][j]] = 10;
            // todos los valores son correctos pero no estan en orden
            if (regular == 4) for (int k = 0; k < 10; k++) if (
                k != intentos[n_intentos][0] && k != intentos[n_intentos][1] &&
                k != intentos[n_intentos][2] && k != intentos[n_intentos][3]
            ) nros_posibles[k] = 10;

            n_intentos++;
        } else correcto = 1;
    } while (n_intentos < 10 && correcto == 0);
    
    return 0;
}