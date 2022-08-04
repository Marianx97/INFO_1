#include <stdio.h>

/* Versión 1 */
// int main (void) {
//     int temperaturaC = 0;
//     int temperaturaK = 0;
//     printf("Por favor ingrese un valor de temperatura en grados Celsius: ");
//     scanf("%d", &temperaturaC);
//     temperaturaK = temperaturaC + 273;
//     printf("Su valor en grados Celsius es: %d ºC", temperaturaC);
//     printf("\nSu valor en grados Kelvin es: %d ºK", temperaturaK);
//     return 0;
// }

/* Versión 2 */
int main (void) {
    int temperatura = 0;
    printf("Por favor ingrese un valor de temperatura en grados Celsius: ");
    scanf("%d", &temperatura);
    printf("Su valor en grados Celsius es: %d ºC\nSu valor en grados Kelvin es: %d ºK", temperatura, (temperatura + 273));
    return 0;
}