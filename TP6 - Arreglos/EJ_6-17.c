#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char nombre[20];
    double horas = 0, nivel_salarial = 0, sueldo_bruto = 0, sueldo_neto = 0, impuesto_hacienda = 0, impuesto_seg_soc = 0;
    printf("Ingrese el nombre del empleado: ");
    fgets(nombre, 20, stdin);
    nombre[my_strlen(nombre) - 1] = '\0';
    printf("Ingrese la cantidad de horas trabajadas: "); scanf("%lf", &horas);
    printf("Ingrese el nivel salarial del empleado (cuanto gana por hora): ($)"); scanf("%lf", &nivel_salarial);
    sueldo_bruto = horas * nivel_salarial;
    impuesto_hacienda = sueldo_bruto * 0.2;
    impuesto_seg_soc = sueldo_bruto * 0.08;
    sueldo_neto = sueldo_bruto - impuesto_hacienda - impuesto_seg_soc;
    printf("--o--o--o--o--\n");
    printf("Empleado: %s\n", nombre);
    printf("Sueldo bruto: %.4f\n", sueldo_bruto);
    printf("Retencion por impuesto de Hacienda: %.4f\n", impuesto_hacienda);
    printf("Retencion por impuesto de Seguridad social: %.4f\n", impuesto_seg_soc);
    printf("Sueldo neto: %.4f\n", sueldo_neto);
    return 0;
}