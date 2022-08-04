#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "../inc/my_string.h"

typedef enum { MAXIMO, MINIMO } t_extremo;
typedef enum { REC, POL } t_coord;

struct div_result {
    int cociente;
    int resto;
};

struct rec_coord {
    double x;
    double y;
};

struct pol_coord {
    double module;
    double rad_angle;
    double deg_angle;
};

struct cmplx_num {
    struct rec_coord rec;
    struct pol_coord pol;
};

double obtener_extremo_double(double *, int, int *, t_extremo);
bool condicion_extremo_double (double, double, t_extremo);
int obtener_extremo_int(int *, int, int *, t_extremo);
bool condicion_extremo_int (int, int, t_extremo);
double promedio_aritmetico(double *, int);
double desvio_estandar(double *, int);
float dist (float, float, float, float);
int c_digitos (int);
int fibonacci (int);
int factorial (int);
int int_my_pow (int, int);
double double_my_pow (double, int);
int my_mul (int, int);
void minimo (double *, int, int, double *, int *);
double prom_rec (double *, int, int, double);
int img_especular (int, int);
void print_even (int *, int, int);
int num_char_to_int (char);
int num_str_to_int (char *);
char int_to_num_char (int);
void int_to_num_str (int, char *);
int dec_to_bin (int);
int bin_to_dec (int);
int hex_char_to_bin (char);
int hex_str_to_bin (char *);
char bin_to_hex_char (int);
void bin_to_hex_str (int, char *);
int oct_to_bin (int);
int bin_to_oct (int);
void dec_to_hex_str (int, char *);
int hex_str_to_dec (char *);
int hex_str_to_dec_rec (char *, int, int, int);
int dec_to_oct (int);
int oct_to_dec (int);
int hex_str_to_oct (char *);
void oct_to_hex_str (int, char *);
void dec_str_to_oct_str (char *);
void dec_str_to_hex_str (char *);
void dec_str_to_bin_str (char *);
void show_greater_average (double *);
double sin_wave (double, double, double, double);
double polinomio_x (double [], int, double);
struct div_result cociente(int, int);
double rad_to_sexagesimal(double);
struct rec_coord pol_to_rec (struct pol_coord);
struct pol_coord rec_to_pol (struct rec_coord);
struct rec_coord assign_rec_cmplx (double, double);
struct pol_coord assign_pol_cmplx (double, double);
struct cmplx_num assign_cmplx_number (t_coord, double, double);
struct rec_coord rec_cmplx_suma (struct rec_coord, struct rec_coord);
struct rec_coord rec_cmplx_resta (struct rec_coord, struct rec_coord);
struct pol_coord pol_cmplx_mul (struct pol_coord, struct pol_coord);
struct pol_coord pol_cmplx_div (struct pol_coord, struct pol_coord);
struct pol_coord pol_cmplx_pow (struct pol_coord, double);
struct cmplx_num cmplx_suma (struct cmplx_num, struct cmplx_num);
struct cmplx_num cmplx_resta (struct cmplx_num, struct cmplx_num);
struct cmplx_num cmplx_mul (struct cmplx_num, struct cmplx_num);
struct cmplx_num cmplx_div (struct cmplx_num, struct cmplx_num);
struct cmplx_num cmplx_pow (struct cmplx_num, double);
void print_cmplx (struct cmplx_num, t_coord);
