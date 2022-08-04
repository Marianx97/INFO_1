#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i = 0, valor = 0, c_pruebas = 1000,
    cuenta_0 = 0, cuenta_1 = 0, cuenta_2 = 0, cuenta_3= 0 ,cuenta_4 = 0,
    cuenta_5 = 0, cuenta_6 = 0, cuenta_7 = 0, cuenta_8= 0 ,cuenta_9 = 0;

    for (i = 0; i < c_pruebas; i++) {
        valor = rand() % 10;
        switch (valor) {
        case 0:
            cuenta_0++;
            break;
        case 1:
            cuenta_1++;
            break;
        case 2:
            cuenta_2++;
            break;
        case 3:
            cuenta_3++;
            break;
        case 4:
            cuenta_4++;
            break;
        case 5:
            cuenta_5++;
            break;
        case 6:
            cuenta_6++;
            break;
        case 7:
            cuenta_7++;
            break;
        case 8:
            cuenta_8++;
            break;
        case 9:
            cuenta_9++;
            break;
        default:
            printf("Aparecio un valor fuera de lo esperado\n");
            break;
        }
    }
    printf("Hubo %d ocurrencias para el numero 0. Representan un %.2f %% de las ocurrencias.\n", cuenta_0, ((float) cuenta_0/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 1. Representan un %.2f %% de las ocurrencias.\n", cuenta_1, ((float) cuenta_1/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 2. Representan un %.2f %% de las ocurrencias.\n", cuenta_2, ((float) cuenta_2/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 3. Representan un %.2f %% de las ocurrencias.\n", cuenta_3, ((float) cuenta_3/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 4. Representan un %.2f %% de las ocurrencias.\n", cuenta_4, ((float) cuenta_4/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 5. Representan un %.2f %% de las ocurrencias.\n", cuenta_5, ((float) cuenta_5/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 6. Representan un %.2f %% de las ocurrencias.\n", cuenta_6, ((float) cuenta_6/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 7. Representan un %.2f %% de las ocurrencias.\n", cuenta_7, ((float) cuenta_7/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 8. Representan un %.2f %% de las ocurrencias.\n", cuenta_8, ((float) cuenta_8/c_pruebas)*100);
    printf("Hubo %d ocurrencias para el numero 9. Representan un %.2f %% de las ocurrencias.\n", cuenta_9, ((float) cuenta_9/c_pruebas)*100);
}