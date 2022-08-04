#include <stdio.h>
#include <stdbool.h>
#include "../inc/my_math.h"

#define F_24_MIN_L 4
#define F_24_MAX_L 5
#define F_12_MIN_L 7
#define F_12_MAX_L 8

typedef enum { HFMT24, HFMT12 } t_hf;

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct date {
    int year;
    int month;
    int day;
};

void seg_to_hhmmss (int, int *, int *, int *);
int fecha_valida (char *);
bool time_is_f_12 (char *);
bool time_is_f_24 (char *);
bool time_is_hf (char *, t_hf);
void time_12h_to_24h(char *);
void time_24h_to_12h(char *);
void convert_time_format (char *, t_hf);
struct time create_time(void);
int set_time (struct time *, int, int, int);
void show_time (struct time);
struct date create_date(void);
int set_date (struct date *, int, int, int);
void show_date (struct date);
void copy_date (struct date *, struct date *);
void next_day (struct date *);
void prev_day (struct date *);

