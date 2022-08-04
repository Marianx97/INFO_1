#include <stdio.h>
#include <stdlib.h>

void inicializar_baraja (int (*baraja)[12]);

void dar_mano (int (*baraja)[12]);

void imprimir_carta(int, int);

int main (void) {
    int baraja[4][12], c_jugadores = 0;
    inicializar_baraja(baraja);
    printf("Ingrese la cantidad de jugadores que participaran (2, 4, 6): "); scanf("%d", &c_jugadores);

    if (c_jugadores == 2 || c_jugadores == 4 || c_jugadores == 6) {
        for (int i = 1; i <= c_jugadores; i++) {
            printf("La mano del jugador %d es:\n", i);
            dar_mano(baraja);
        }
    } else printf("La cantidad de jugadores debe ser 2, 4 o 6.\n");

    return 0;
}

void inicializar_baraja (int baraja[4][12]) {
    for (int i = 0; i < 4; i++) for (int j = 0; j < 12; j++) if (j != 7 && j != 8) baraja[i][j] = 1; else baraja[i][j] = 0;
}

void dar_mano (int baraja[4][12]) {
    int palo = 0, numero = 0, salio_carta = 0;
    for (int i = 0; i < 3; i++) {
        do {
            palo = (rand() % 4);
            numero = (rand() % 12);
            if (baraja[palo][numero] == 1) {
                salio_carta = 1;
                baraja[palo][numero] = 0;
                imprimir_carta(numero, palo);
            }
        } while (salio_carta == 0);
        salio_carta = 0;
    }
}

void imprimir_carta(int numero, int palo) {
    printf("%d de ", numero + 1);
    switch (palo + 1) {
    case 1:
        printf("Espada.\n");
        break;
    case 2:
        printf("Basto.\n");
        break;
    case 3:
        printf("Oro.\n");
        break;
    case 4:
        printf("Copa.\n");
        break;
    }
}