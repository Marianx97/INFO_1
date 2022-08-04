#include <stdio.h>

int main (void) {
    int temperatura = 0;
    printf("Por favor ingrese un valor de temperatura en grados Celsius: ");
    scanf("%d", &temperatura);
    printf("Su valor en grados Celsius es: %d ºC\n", temperatura);
    printf("Su valor en grados Kelvin es: %d ºK\n", (temperatura + 273));
    printf("Su valor en grados Fahrenheit es: %.2f ºF\n", ((float) temperatura * 9/5 + 32));
    return 0;
}