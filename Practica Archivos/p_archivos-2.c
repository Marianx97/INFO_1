#include <stdio.h>
#include "../Biblioteca/inc/my_string.h"

#define F_ALUMNOS "../Archivos/alumnos.txt"
#define F_CALIFICACIONES "../Archivos/calificaciones.txt"
#define F_LEGAJOS "../Archivos/legajos.txt"

typedef struct alumno {
    char legajo[9];
    char nombre[31];
    int calificacion;
} ALUMNO;

void cargar_nombres (FILE *, int *, ALUMNO []);
void cargar_legajos (FILE *, int *, ALUMNO []);
void cargar_notas (FILE *, int *, ALUMNO []);
void volcar_alumnos (FILE *, ALUMNO [], int);

int main (int argc, char ** argv) {
    if (argc < 2) {
        perror("Argument error!\nusage: .\\p_archivos-2.c output.txt\n");
        return -1;
    } else if (!str_includes(argv[1], ".txt")) {
        perror("Argument error!\noutput file must be \".txt\"\nusage: .\\p_archivos-2.c output.txt\n");
        return -2;
    }
    
    FILE * f_alumn, * f_leg, * f_cal, * f_curso;
    ALUMNO curso[10];
    int cant_alumnos = 0, cant_legajos = 0, cant_notas = 0;
    f_alumn = fopen(F_ALUMNOS, "r");
    f_leg = fopen(F_LEGAJOS, "r");
    f_cal = fopen(F_CALIFICACIONES, "r");
    cargar_legajos(f_leg, &cant_legajos, curso);
    cargar_nombres(f_alumn, &cant_alumnos, curso);
    cargar_notas(f_cal, &cant_notas, curso);
    fclose(f_alumn); fclose(f_leg); fclose(f_cal);
    f_curso = fopen(argv[1], "w");
    volcar_alumnos(f_curso, curso, cant_alumnos);
    fclose(f_curso);
    return 0;
}

void cargar_nombres (FILE * f_alumn, int * c_alumn, ALUMNO curso[]) {
    char ** str_arr, buffer[100];
    int c_alumn_aux = 0;
    str_arr = malloc(1 * sizeof(char *));
    while (fgets(buffer, 100, f_alumn) != NULL) {
        c_alumn_aux = split(buffer, ",", str_arr);
        for (int i = 0; i < c_alumn_aux; i++) my_strcpy(curso[i].nombre, str_arr[i]);
        *c_alumn += c_alumn_aux;
        free_split(str_arr, c_alumn_aux);
    }
    free(str_arr);
    return;
}

void cargar_legajos (FILE * f_leg, int * c_leg, ALUMNO curso[]) {
    char ** str_arr, buffer[100];
    int c_leg_aux = 0;
    str_arr = malloc(1 * sizeof(char *));
    while (fgets(buffer, 100, f_leg) != NULL) {
        c_leg_aux = split(buffer, ",", str_arr);
        for (int i = 0; i < c_leg_aux; i++) my_strcpy(curso[i].legajo, str_arr[i]);
        *c_leg += c_leg_aux;
        free_split(str_arr, c_leg_aux);
    }
    free(str_arr);
    return;
}

void cargar_notas (FILE * f_cal, int * c_cal, ALUMNO curso[]) {
    char ** str_arr, buffer[100];
    int c_cal_aux = 0;
    str_arr = malloc(1 * sizeof(char *));
    while (fgets(buffer, 100, f_cal) != NULL) {
        c_cal_aux = split(buffer, ",", str_arr);
        for (int i = 0; i < c_cal_aux; i++) curso[i].calificacion = atoi(str_arr[i]);
        *c_cal += c_cal_aux;
        free_split(str_arr, c_cal_aux);
    }
    free(str_arr);
    return;
}

void volcar_alumnos (FILE * f_curso, ALUMNO curso[], int c_alumnos) {
    char header[] = "| Legajo\t| Alumno\t\t\t| Calificacion\t\t|\n", row[45], calificacion[3];

    fputs(header, f_curso);
    for (int i = 0; i < c_alumnos; i++) {
        my_strcpy(row, "| ");
        my_strcat(row, curso[i].legajo);
        my_strcat(row, "\t| ");
        my_strcat(row, curso[i].nombre);
        my_strcat(row, "\t\t| ");
        itoa(curso[i].calificacion, calificacion, 10);
        my_strcat(row, calificacion);
        my_strcat(row, "\t\t|\n");
        fputs(row, f_curso);
    }
    return;
}
