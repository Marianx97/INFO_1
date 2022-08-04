#include "../inc/my_temp.h"

bool valid_temp (char * temp_str) {
    int indice = 0;
    do {
        if (!char_is_num(temp_str[indice]) && temp_str[indice] != '.') return false;
        indice++;
    } while (temp_str[indice] != ' ');
    indice++;
    if (temp_str[indice] != 'C' && temp_str[indice] != 'F' && temp_str[indice] != 'K') return false;
    return true;
}

t_unidad get_temp_unit (char * temp_str) {
    int s_length = my_strlen(temp_str);
    switch (temp_str[s_length - 1]) {
        case 'C': return CELSIUS; break;
        case 'K': return KELVIN; break;
        case 'F': return FAHRENHEIT; break;
        default: break;
    }
}

double celsius_to_kelvin (double celsius) {
    return celsius + 273.15;
}

double celsius_to_fahrenheit (double celsius) {
    return (celsius * (9.0/5.0)) + 32;
}

double kelvin_to_celsius (double kelvin) {
    return kelvin - 273.15;
}

double kelvin_to_fahrenheit (double kelvin) {
    return ((kelvin - 273.15) * (9.0/5.0)) + 32;
}

double fahrenheit_to_celsius (double fahrenheit) {
    return  (fahrenheit - 32) * (5.0/9.0);
}

double fahrenheit_to_kelvin (double fahrenheit) {
    return (fahrenheit - 32) * (5.0/9.0) + 273.15;
}

double temp_convertion (char * temp_str, double (*pf) (double)) {
    int s_temp_str = my_strlen(temp_str);
    char aux_temp_str[s_temp_str - 2];
    double temp = 0;
    my_strncpy(aux_temp_str, temp_str, s_temp_str - 2);
    aux_temp_str[s_temp_str - 2] = '\0';
    temp = atof(aux_temp_str);
    return pf(temp);
}

void print_temp_convertion (char * temp_str) {
    t_unidad in_unit;
    if (valid_temp(temp_str)) {
        in_unit = get_temp_unit(temp_str);
        switch (in_unit) {
            case CELSIUS:
                printf("%s = %.2f K\n", temp_str, temp_convertion(temp_str, celsius_to_kelvin));
                printf("%s = %.2f F\n", temp_str, temp_convertion(temp_str, celsius_to_fahrenheit));
            break;
            case KELVIN:
                printf("%s = %.2f C\n", temp_str, temp_convertion(temp_str, kelvin_to_celsius));
                printf("%s = %.2f F\n", temp_str, temp_convertion(temp_str, kelvin_to_fahrenheit));
            break;
            case FAHRENHEIT:
                printf("%s = %.2f C\n", temp_str, temp_convertion(temp_str, fahrenheit_to_celsius));
                printf("%s = %.2f K\n", temp_str, temp_convertion(temp_str, fahrenheit_to_kelvin));
            break;
            default: break;
        }
    } else printf("La informacion ingresada ('%s') no es un valor de temperatura valido.\n", temp_str);
    return;
}