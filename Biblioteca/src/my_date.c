#include "../inc/my_date.h"

void seg_to_hhmmss (int seg_total, int * horas, int * minutos, int * segundos) {
    *horas = seg_total / 3600;
    *minutos = (seg_total % 3600) / 60;
    *segundos = (seg_total % 3600) % 60;
}

int fecha_valida (char * fecha) {
    int f_len = my_strlen(fecha), dia = 0, mes = 0, anio = 0;
    if (f_len != 10) return -1;
    for (int i = 0; i < f_len; i++) {
        switch (i) {
        case 2:
            if (fecha[i] != '/') return -2;
            break;
        
        case 5:
            if (fecha[i] != '/') return -2;
            break;
        
        default:
            if (fecha[i] < 48 || 57 < fecha[i]) return -2;
            break;
        }
    }
    dia = ((int) fecha[0] - 48) * 10 + ((int) fecha[1] - 48);
    mes = ((int) fecha[3] - 48) * 10 + ((int) fecha[4] - 48);
    anio = ((int) fecha[6] - 48) * 1000 + ((int) fecha[7] - 48) * 100 + ((int) fecha[8] - 48) * 10 + ((int) fecha[9] - 48);
    if (anio < 1900 || 2100 < anio) return -3;
    else if (mes < 1 || 12 < mes) return -3;
    else if (dia < 1 || 31 < dia) return -3;
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (30 < dia)) return -3;
    else if (mes == 2 && 29 < dia) return -3;
    else return 1;
}

bool time_is_f_12 (char * time_str) {
    int time_str_l = my_strlen(time_str);
    if (time_str_l < F_12_MIN_L || F_12_MAX_L < time_str_l) return false;
    for (int i = 0; i < time_str_l - 3; i++) if (!char_is_num(time_str[i]) && time_str[i] != ':') return false;
    if (!str_includes(time_str, " AM") && !str_includes(time_str, " PM")) return false;
    return true;
}

bool time_is_f_24 (char * time_str) {
    int time_str_l = my_strlen(time_str);
    if (time_str_l < F_24_MIN_L || F_24_MAX_L < time_str_l) return false;
    for (int i = 0; i < time_str_l; i++) if (!char_is_num(time_str[i]) && time_str[i] != ':') return false;
    return true;
}

bool time_is_hf (char * time_str, t_hf format) {
    if (format == HFMT12) return time_is_f_12(time_str);
    if (format == HFMT24) return time_is_f_24(time_str);
}

void time_12h_to_24h(char * time_str) {
    char aux_time_str[5];
    int time_str_l = my_strlen(time_str), aux_hour = 0;
    if (str_includes(time_str, " AM")) {
        my_strncpy(aux_time_str, time_str, time_str_l - 3);
        aux_time_str[time_str_l - 3] = '\0';
        my_strcpy(time_str, aux_time_str);
    } else {
        if (time_str[1] == ':') {
            aux_hour = num_char_to_int(time_str[0]);
            aux_hour += 12;
            int_to_num_str(aux_hour, aux_time_str);
            my_strncpy(aux_time_str+2, time_str + 1, 3);
            aux_time_str[5] = '\0';
            my_strcpy(time_str, aux_time_str);
        } else {
            my_strncpy(aux_time_str, time_str, 2);
            aux_time_str[2] = '\0';
            aux_hour = num_str_to_int(aux_time_str);
            if (aux_hour == 12) aux_hour = 0; else aux_hour += 12;
            int_to_num_str(aux_hour, aux_time_str);
            if (aux_hour == 0) {
                my_strncpy(aux_time_str+1, time_str + 2, 3);
                aux_time_str[4] = '\0';
            } else {
                my_strncpy(aux_time_str+2, time_str + 2, 3);
                aux_time_str[5] = '\0';
            }
            my_strcpy(time_str, aux_time_str);
        }
    }
    return;
}

void time_24h_to_12h(char * time_str) {
    char aux_time_str[8];
    int time_str_l = my_strlen(time_str), aux_hour = 0;
    if (time_str[1] == ':') {
        my_strcat(time_str, " AM");
    } else {
        my_strncpy(aux_time_str, time_str, 2);
        aux_time_str[2] = '\0';
        aux_hour = num_str_to_int(aux_time_str);
        if (aux_hour < 12) my_strcat(time_str, " AM");
        else {
            if (12 < aux_hour) aux_hour -= 12;
            int_to_num_str(aux_hour, aux_time_str);
            if (aux_hour < 10) {
                my_strncpy(aux_time_str+1, time_str+2, 3);
                aux_time_str[4] = '\0';
            } else {
                my_strncpy(aux_time_str+2, time_str+2, 3);
                aux_time_str[5] = '\0';
            }
            my_strcpy(time_str,aux_time_str);
            my_strcat(time_str, " PM");
        }
    }
    return;
}

void convert_time_format (char * time_str, t_hf format) {
    if (time_is_hf(time_str, format)) return;
    switch (format) {
        case HFMT24: time_12h_to_24h(time_str); break;
        case HFMT12: time_24h_to_12h(time_str); break;
        default: break;
    }
    return;
}

struct time create_time(void) {
    struct time new_time;
    new_time.hours = 0;
    new_time.minutes = 0;
    new_time.seconds = 0;
    return new_time;
}

int set_time (struct time * time, int hours, int minutes, int seconds) {
    if (hours < 0 || 23 < hours || minutes < 0 || 59 < minutes || seconds < 0 || 59 < seconds) return -1;
    else {
        time->hours = hours;
        time->minutes = minutes;
        time->seconds = seconds;
    }
    return 1;
}

void show_time (struct time time) {
    printf("%d:%d:%d\n", time.hours, time.minutes, time.seconds);
    return;
}

struct date create_date(void) {
    struct date new_date;
    new_date.year = 1900;
    new_date.month = 1;
    new_date.day = 1;
    return new_date;
}

int set_date (struct date * date, int year, int month, int day) {
    if (year < 0) return -1;
    else if (month < 1 || 12 < month) return -1;
    else if (day < 1 || 31 < day) return -1;
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (30 < day)) return -1;
    else if (month == 2 && 29 < day) return -1;
    else {
        date->year = year;
        date->month = month;
        date->day = day;
    }
    return 1;
}

void show_date (struct date date) {
    printf("%d/%d/%d\n", date.day, date.month, date.year);
    return;
}

void copy_date (struct date * dest_date, struct date * org_date) {
    dest_date->year = org_date->year;
    dest_date->month = org_date->month;
    dest_date->day = org_date->day;
    return;
}

void next_day (struct date * date) {
    if (date->month == 12 && date->day == 31) {
        date->year++;
        date->month = 1;
        date->day = 1;
    } else if (
        ((date->month == 4 || date->month == 6 || date->month == 9 || date->month == 11) && date->day == 30) ||
        (date->year % 4 == 0 && date->month == 2 && date->day == 29) ||
        (date->year % 4 != 0 && date->month == 2 && date->day == 28) ||
        (date->day == 31)
        )
    {
        date->month++;
        date->day = 1;
    } else date->day++;
    return;
}

void prev_day (struct date * date) {
    if (date->month == 1 && date->day == 1) {
        date->year--;
        date->month = 12;
        date->day = 31;
    } else if ((date->month == 2 || date->month == 4 || date->month == 6 || date->month == 8 || date->month == 9 || date->month == 11) && date->day == 1) {
        date->month--;
        date->day = 31;
    } else if (date->year % 4 == 0 && date->month == 3 && date->day == 1) {
        date->month--;
        date->day = 29;
    } else if (date->year % 4 != 0 && date->month == 3 && date->day == 1) {
        date->month--;
        date->day = 28;
    } else if (date->day == 1) {
        date->month--;
        date->day = 30;
    } else date->day--;
    return;
}
