#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../inc/my_math.h"

typedef enum { ASC, DESC } t_order;
typedef enum {
    ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO,
    JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE
} t_mes;

struct alumno {
    long legajo;
    char apellido[31];
    char nombre[31];
};

void double_arr_order (double [], int, t_order);
void int_arr_order (int [], int, t_order);
void pares(int [], int, int []);
void impares(int [], int, int []);
void positivos(int [], int, int []);
void negativos(int [], int, int []);
void print_int_vector(int [], int);
void print_double_vector(double [], int);
void scan_int_vector(int vector[], int);
void scan_double_vector(double vector[], int);
void print_vectores(int [], int, int [], int, int [], int, int [], int);
void quicksort (int [], int, int, t_order);
int particion (int [], int, int, t_order);
void burbuja (int [], int, t_order);
void burbuja_m (int [], int, t_order);
bool order_condition (int a, int b, t_order order);
void seleccion (int [], int, t_order);
int int_obtener_minimo(int [], int, int *);
int int_obtener_maximo(int [], int, int *);
void random_initialize (int [], int, int);
void sinu_samples (double [], int, double, double, double);
void poli_samples (double [], int, double, double, double [], int);
void cargar_alumno (char [70][9], char [70][15], char [70][15], char [70][10], int [70], int);
void ordenar_alumnos (char [70][9], char [70][15], char [70][15], char [70][10], int [70], int);
void desplazar_alumnos (char [70][9], char [70][15], char [70][15], char [70][10], int [70], int , int);
void print_alumno (char [], char[], char[], char[], int);
void print_matriz_double(int n_filas, int m_columnas, double [n_filas][m_columnas]);
void print_matriz_int(int n_filas, int m_columnas, int [n_filas][m_columnas]);
bool matriz_simetrica (int n_filas, int m_columnas, double [n_filas][m_columnas]);
double traza_de_matriz (int n_filas, int m_columnas, double [n_filas][m_columnas]);
double determinante_2x2 (double [2][2]);
double determinante_nxm (int n_filas, int m_columnas, double [n_filas][m_columnas]);
void cargar_matriz_auxiliar (int n_filas, int m_columnas, double [n_filas][m_columnas],double [n_filas-1][m_columnas-1], int, int);
void matriz_transpuesta (int n_filas, int m_columnas, double [n_filas][m_columnas],double [m_columnas][n_filas]);
void mul_matrices (int n_filas, int m_columnas, double [n_filas][m_columnas],int m_filas, int p_columnas, double [m_filas][p_columnas], double [n_filas][p_columnas]);
int obtener_extremo_int_matriz (int n_filas, int m_columnas, int [n_filas][m_columnas], t_extremo);
void sort (void *[], size_t, void (*) (void * [], size_t, t_order), t_order);
void cargar_alumnos_struct(struct alumno *);
bool struct_alumnos_order_condition(struct alumno, struct alumno, t_order);
void ordenar_alumnos_struct(struct alumno *, int, t_order);
void print_alumnos_struct(struct alumno *, int, FILE *);
