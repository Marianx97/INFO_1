#include <stdio.h>

typedef float TIPODATO;
enum {
    CELSIUS = 1,
    FAHREINHEIT = 2,
    KELVIN = 3
};

float conversion (float, int, int);

int main (void) {
    float valor_entrada = 0, valor_salida = 0;
    int escala_entrada = 0, escala_salida = 0;
    printf("Ingrese la escala en la que esta midiendo la temperatura (1. C / 2. F / 3. K): ");
    scanf("%d", &escala_entrada);
    printf("Ingrese un valor de temperatura: "); scanf("%f", &valor_entrada);
    printf("Ingrese una escala de destino (1. C / 2. F / 3. K): "); scanf("%d", &escala_salida);
    valor_salida = conversion(valor_entrada, escala_entrada, escala_salida);
    printf("Valor convertido: %.2f\n", valor_salida);
    return 0;
}

float conversion (float valor_entrada, int escala_entrada, int escala_salida) {
    float conversion = 0;
    if (escala_entrada == escala_salida) conversion = valor_entrada;
    else {
        switch (escala_entrada) {
        case CELSIUS:
            if (escala_salida == KELVIN) conversion = valor_entrada + 273.15;
            if (escala_salida == FAHREINHEIT) conversion = (valor_entrada * (9/5)) + 32;
            break;
        
        case FAHREINHEIT:
            if (escala_salida == CELSIUS) conversion = (valor_entrada - 32) * (5/9);
            if (escala_salida == KELVIN) conversion = (valor_entrada - 32) * (5/9) + 273.15;
            break;
        
        case KELVIN:
            if (escala_salida == CELSIUS) conversion = valor_entrada - 273.15;
            if (escala_salida == FAHREINHEIT) conversion = ((valor_entrada - 273.15) * (9/5)) + 32;
            break;
        }
    }
    return conversion;
}