#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../../Biblioteca/inc/my_string.h"

typedef struct palabras {
    char nombre[20];
    int cantidad;
} PALABRAS; 

int CargarPalabras (const char *, PALABRAS**);
int EscribirPalabrasEnArchivo(PALABRAS**, int, const char *);
void order_words_array(PALABRAS**, int);
void free_words_array(PALABRAS**, int);