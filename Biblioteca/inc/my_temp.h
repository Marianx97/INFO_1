#include <stdio.h>
#include <stdbool.h>
#include "../inc/my_string.h"

typedef enum { CELSIUS, FAHRENHEIT, KELVIN } t_unidad;

bool valid_temp (char *);
t_unidad get_temp_unit (char *);
double celsius_to_kelvin (double);
double celsius_to_fahrenheit (double);
double kelvin_to_celsius (double);
double kelvin_to_fahrenheit (double);
double fahrenheit_to_kelvin (double);
double fahrenheit_to_celsius (double);
double temp_convertion (char *, double (*) (double));
void print_temp_convertion (char *);
