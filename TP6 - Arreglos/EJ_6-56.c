#include "../Biblioteca/inc/my_vectors.h"
#include <time.h>

int main (void) {
    srand(time(NULL));
    int code[4], digito_acertado = 0, posicion_acertada = 0, correcto = 0, n_intentos = 0;
    char input_code_str[4];
    
    // Generar codigo
    for (int i = 0; i < 4; i++) code[i] = rand() % 10;

    printf("Intente adivinar el codigo generado por la PC.\n");
    // Input del usuario
    do {
        digito_acertado = 0; posicion_acertada = 0;
        printf("Le quedan %d itentos\n", 10 - n_intentos);
        printf("Intento %d: ", n_intentos+1); scanf("%s", input_code_str);
        
        for (int j = 0; j < 4; j++) {
            if (code[j] == input_code_str[j] - 48) posicion_acertada++;
            else for (int k = 0; k < 4; k++) if (code[k] == input_code_str[j] - 48) {
                digito_acertado++;
                break;
            } 
        }
        printf("Bien: %d\n", posicion_acertada);
        printf("Regular: %d\n", digito_acertado);
        if (posicion_acertada == 4) correcto = 1;
        n_intentos++;
    } while (correcto == 0 && n_intentos < 10);
    if (n_intentos < 10) printf("Excelente!\n"); else printf("Mejor suerte la proxima...\n");
    printf("El codigo era: "); print_int_vector(code, 4);
    return 0;
}