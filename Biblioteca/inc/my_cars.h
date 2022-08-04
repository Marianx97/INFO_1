#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../inc/my_string.h"

typedef enum { RENAULT, TOYOTA, FIAT, FERRARI, FORD } t_car_brand;
typedef enum { RED, BLUE, GREEN, BLACK, YELLOW } t_car_color;

struct car {
    int dom_number;
    int motor_number;
    int motor_power;
    char brand[31];
    char model[31];
    t_car_color color;
};

struct car create_car (void);
void change_car_color(struct car *, t_car_color);
void print_car (struct car *);
void clone_car (struct car *, struct car *);
