#include <stdio.h>

int main (void) {
    int legajo = 0, calificacion = 0, c_alumnos = 0,
    sumatoria_notas = 0, c_aprobados = 0, mayor_nota = 0, c_mayor_nota = 0,
    c_sobresaliente = 0, c_muy_bueno = 0, c_bueno = 0, c_regular = 0, c_insuficiente = 0;
    
    printf("A continuacion se cargaran los legajos de los alumnos y las notas de cada uno.\nPara finalizar la carga ingrese legajo 0.\n");
    do {
        printf("Ingrese el legajo del alumno: ");
        scanf("%d", &legajo);
        if (legajo != 0) {
            if (legajo < 10000000 || 99999999 < legajo) printf("El legajo debe contener 8 digitos.\n");
            else {
                printf("Ingrese la calificacion del alumno: ");
                scanf("%d", &calificacion);
                if (calificacion < 1 || 10 < calificacion) printf("La calificacion debe encontrarse entre 1 y 10. Vuelva a cargar.\n");
                else {
                    if (mayor_nota < calificacion) {
                        mayor_nota = calificacion;
                        c_mayor_nota = 1;
                    } else if (calificacion == mayor_nota) c_mayor_nota++;
                    sumatoria_notas += calificacion;
                    c_alumnos++;
                    if (6 <= calificacion) c_aprobados++;
                    if (calificacion == 10) c_sobresaliente++;
                    if (calificacion == 8 || calificacion == 9) c_muy_bueno++;
                    if (calificacion == 7 || calificacion == 6) c_bueno++;
                    if (calificacion == 5 || calificacion == 4) c_regular++;
                    if (calificacion < 4) c_insuficiente++;
                }
            }
        }
    } while (legajo != 0);
    printf("El curso contiene %d alumnos.\n", c_alumnos);
    printf("El promedio de las notas del curso es: %d\n", sumatoria_notas/c_alumnos);
    printf("Aprobaron %d alumnos.\n", c_aprobados);
    printf("La mayor nota fue un: %d\n", mayor_nota);
    printf("%d alumnos obtuvieron la mayor nota.\n", c_mayor_nota);
    printf("%d alumnos tuvieron una nota sobresaliente.\n", c_sobresaliente);
    printf("%d alumnos tuvieron una nota muy buena.\n", c_muy_bueno);
    printf("%d alumnos tuvieron una nota buena.\n", c_bueno);
    printf("%d alumnos tuvieron una nota regular.\n", c_regular);
    printf("%d alumnos tuvieron una nota insuficiente.\n", c_insuficiente);
    return 0;
}