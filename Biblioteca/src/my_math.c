#include "../inc/my_math.h"

double obtener_extremo_double(double * doubles, int c_elementos, int * indice, t_extremo tipo_de_extremo) {
    double extremo = 0;
    for (int i = 0; i < c_elementos; i++) {
        if (i == 0) extremo = doubles[0];
        else if (condicion_extremo_double(extremo, doubles[i], tipo_de_extremo)) {
            extremo = doubles[i];
            *indice = i;
        }
    }
    return extremo;
}

bool condicion_extremo_double (double a, double b, t_extremo tipo_de_extremo) {
    switch (tipo_de_extremo) {
        case MAXIMO: return a < b; break;
        case MINIMO: return b < a; break;
    }
}

int obtener_extremo_int(int * enteros, int c_elementos, int * indice, t_extremo tipo_de_extremo) {
    int extremo = 0;
    for (int i = 0; i < c_elementos; i++) {
        if (i == 0) extremo = enteros[0];
        else if (condicion_extremo_int(extremo, enteros[i], tipo_de_extremo)) {
            extremo = enteros[i];
            *indice = i;
        }
    }
    return extremo;
}

bool condicion_extremo_int (int a, int b, t_extremo tipo_de_extremo) {
    switch (tipo_de_extremo) {
        case MAXIMO: return a < b; break;
        case MINIMO: return b < a; break;
    }
}

double promedio_aritmetico(double * doubles, int c_elementos) {
    double suma = 0;
    for (int i = 0; i < c_elementos; i++) suma += doubles[i];
    return suma / c_elementos;
}

double desvio_estandar (double * doubles, int c_elementos) {
    double promedio = promedio_aritmetico(doubles, c_elementos), suma = 0;
    for (int i = 0; i < c_elementos; i++) suma += pow((doubles[i] - promedio), 2);
    return sqrt(suma / (c_elementos - 1));
}

float dist (float x1, float y1, float x2, float y2) {
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

int c_digitos (int num) {
    if (num / 10 != 0) return c_digitos (num / 10) + 1;
    return 1;
}

// retorna el elemento n de la serie de fibonacci
int fibonacci (int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (2 < n) return fibonacci(n - 1) + fibonacci(n - 2);
    return 0;
}

int factorial (int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int int_my_pow (int base, int potencia) {
    if (potencia == 0) return 1;
    if (potencia == 1) return base;
    return base * int_my_pow(base, potencia - 1);
}

double double_my_pow (double base, int potencia) {
    if (potencia == 0) return 1;
    if (potencia == 1) return base;
    return base * double_my_pow(base, potencia - 1);
}

int my_mul (int a, int b) {
    if (b == 0) return 0;
    if (b == 1) return a;
    return a + my_mul(a, b - 1);
}

/*
array: arreglo de elementos
s_array: tamaño del arreglo
p_actual: posicion del indice
v_min: direccion donde guardar el valor minimo
posicion: direccion donde guardar el indice del valor minimo
*/
void minimo (double * array, int s_array, int p_actual, double * v_min, int * posicion) {
    if (p_actual < s_array) {
        if (p_actual == 0) {
            *v_min = array[0];
            *posicion = 0;
        } else {
            if (array[p_actual] < *v_min) {
                *v_min = array[p_actual];
                *posicion = p_actual;
            }
        }
        minimo(array, s_array, p_actual + 1, v_min, posicion);
    } else return;
}

/*
array: arreglo de elementos
s_array: tamaño del arreglo
p_actual: posicion del indice
suma: sumatoria de los elementos del array
*/
double prom_rec (double * array, int s_array, int p_actual, double suma) {
    if (p_actual < s_array) {
        suma += array[p_actual];
        return prom_rec(array, s_array, p_actual + 1, suma);
    } else return suma / s_array;
}

// retorna la imagen especular de un nro. Ej: F(589) = 985
int img_especular (int num, int suma) {
    suma *= 10;
    if (10 < num) {
        suma += num % 10;
        return img_especular(num / 10, suma);
    } else {
        suma += num;
        return suma;
    }
}

void print_even (int * array, int s_array, int p_actual) {
    if (p_actual < s_array) {
        if (p_actual % 2 == 0) printf("%d\n", array[p_actual]);
        print_even(array, s_array, p_actual + 1);
        return;
    }
    return;    
}

int num_char_to_int (char c) {
    if (c < '0' || '9' < c) return 0;
    return c - 48;
}

int num_str_to_int (char * string) {
    int s_length = my_strlen(string), entero = 0, digito = 1;
    for (int i = s_length - 1; 0 <= i; i--) {
        entero += digito * num_char_to_int(string[i]);
        digito *= 10;
    }
    return entero;
}

char int_to_num_char (int entero) {
    return entero + 48;
}

void int_to_num_str (int entero, char * string) {
    int indice = 0;
    do {
        string[indice] = int_to_num_char(entero % 10);
        indice++;
        entero /= 10;
    } while (0 < entero);
    string[indice] = '\0';
    string_reverse(string);
    return;
}

int dec_to_bin (int decimal) {
    int binario = 0, digito = 0, restador = 0;
    do {
        digito = 1;
        restador = 1;
        while (decimal - restador >= 0) {
            restador *= 2;
            digito *= 10;
        }
        binario += digito / 10;
        decimal -= restador / 2;
    } while (decimal > 0);
    return binario;
}

int bin_to_dec (int bin) {
    int suma = 0, i = 0;
    do {
        if (bin % 10) suma += int_my_pow(2, i);
        bin /= 10;
        i++;
    } while (0 < bin);
    return suma;
}

int hex_char_to_bin (char c) {
    switch (c) {
    case '0': return 0; break;
    case '1': return 1; break;
    case '2': return 10; break;
    case '3': return 11; break;
    case '4': return 100; break;
    case '5': return 101; break;
    case '6': return 110; break;
    case '7': return 111; break;
    case '8': return 1000; break;
    case '9': return 1001; break;
    case 'A': return 1010; break;
    case 'B': return 1011; break;
    case 'C': return 1100; break;
    case 'D': return 1101; break;
    case 'E': return 1110; break;
    case 'F': return 1111; break;
    default: return 0; break;
    }
}

int hex_str_to_bin (char * hex) {
    int s_hex = my_strlen(hex), binario = 0, digito = 1;
    for (int i = s_hex - 1; 0 <= i; i--) {
        binario += hex_char_to_bin(hex[i]) * digito;
        digito *= 10000;
    }
    return binario;
}

char bin_to_hex_char (int binario) {
    switch (binario) {
    case 0: return '0' ; break;
    case 1: return '1' ; break;
    case 10: return '2' ; break;
    case 11: return '3' ; break;
    case 100: return '4' ; break;
    case 101: return '5' ; break;
    case 110: return '6' ; break;
    case 111: return '7' ; break;
    case 1000: return '8' ; break;
    case 1001: return '9' ; break;
    case 1010: return 'A' ; break;
    case 1011: return 'B' ; break;
    case 1100: return 'C' ; break;
    case 1101: return 'D' ; break;
    case 1110: return 'E' ; break;
    case 1111: return 'F' ; break;
    default: return '0'; break;
    }
}

void bin_to_hex_str (int binario, char hex[]) {
    int indice = 0;
    do {
        hex[indice] = bin_to_hex_char(binario % 10000);
        binario /= 10000;
        indice++;
    } while (0 < binario);
    hex[indice] = '\0';
    string_reverse(hex);
    return;
}

int oct_to_bin (int oct) {
    int digito = 1, binario = 0;
    do {
        binario += digito * dec_to_bin(oct % 10);
        digito *= 1000;
        oct /= 10;
    } while (0 < oct);
    return binario;
}

int bin_to_oct (int binario) {
    int digito = 1, octal = 0;
    do {
        octal += digito * bin_to_dec(binario % 1000);
        digito *= 10;
        binario /= 1000;
    } while (0 < binario);
    return octal;
}

void dec_to_hex_str (int decimal, char hex[]) {
    int binario = dec_to_bin(decimal);
    bin_to_hex_str(binario, hex);
    return;
}

int hex_str_to_dec (char * hex) {
    int binario = hex_str_to_bin(hex);
    return bin_to_dec(binario);
}

int hex_str_to_dec_rec (char * hex, int s_hex, int p_actual, int suma) {
    if (p_actual < s_hex) {
        suma *= 10000;
        suma += hex_char_to_bin(hex[p_actual]);
        return hex_str_to_dec_rec(hex, s_hex, p_actual + 1, suma);
    } else return bin_to_dec(suma);
}

int dec_to_oct (int decimal) {
    int binario = dec_to_bin(decimal);
    return bin_to_oct(binario);
}

int oct_to_dec (int octal) {
    int binario = oct_to_bin(octal);
    return bin_to_dec(binario);
}

int hex_str_to_oct (char * hex) {
    int binario = hex_str_to_bin(hex);
    return bin_to_oct(binario);
}

void oct_to_hex_str (int oct, char hex[]) {
    int binario = oct_to_bin(binario);
    bin_to_hex_str(binario, hex);
    return;
}

void dec_str_to_oct_str (char * dec_string) {
    int decimal = 0, octal = 0;
    decimal = num_str_to_int(dec_string);
    octal = dec_to_oct(decimal);
    int_to_num_str(octal, dec_string);
    return;
}

void dec_str_to_hex_str (char * dec_string) {
    int decimal = 0;
    decimal = num_str_to_int(dec_string);
    dec_to_hex_str(decimal, dec_string);
    return;
}

void dec_str_to_bin_str (char * dec_string) {
    int decimal = 0, binario = 0;
    decimal = num_str_to_int(dec_string);
    binario = dec_to_bin(decimal);
    int_to_num_str(binario, dec_string);
    return;
}

void show_greater_average (double * array) {
    int c_elementos = 0;
    double promedio = 0;
    while (array[c_elementos] != 0) c_elementos++;
    if (0 < c_elementos) {
        promedio = promedio_aritmetico(array, c_elementos);
        printf("Valores mayores al promedio (%.f):\n", promedio);
        for (int i = 0; i < c_elementos; i++) if (promedio < array[i]) printf("%.f\n", array[i]);
    }
    return;
}

double sin_wave (double A, double f, double t, double phi) {
    return A * sin(2 * M_PI * f * t + phi);
}

double polinomio_x (double coeficientes[], int grado, double x) {
    double p_x = 0;
    for (int i = grado; 0 <= i; i--) p_x += coeficientes[grado - i] * double_my_pow(x,i);
    return p_x;
}

struct div_result cociente(int dividendo, int divisor) {
    struct div_result resultado;
    resultado.cociente = dividendo / divisor;
    resultado.resto = dividendo % divisor;
    return resultado;
}

double rad_to_sexagesimal(double rad) {
    return rad * 57.2958;
}

struct rec_coord pol_to_rec (struct pol_coord coordinate) {
    struct rec_coord resultado;
    resultado.x = coordinate.module * cos(coordinate.rad_angle);
    resultado.y = coordinate.module * sin(coordinate.rad_angle);
    return resultado;
}

struct pol_coord rec_to_pol (struct rec_coord coordinate) {
    struct pol_coord resultado;
    resultado.module = sqrt(coordinate.x * coordinate.x + coordinate.y * coordinate.y);
    resultado.rad_angle = atan(coordinate.y/coordinate.x);
    resultado.deg_angle = rad_to_sexagesimal(resultado.rad_angle);
    return resultado;
}

struct rec_coord assign_rec_cmplx (double x, double y) {
    struct rec_coord resultado;
    resultado.x = x;
    resultado.y = y;
    return resultado;
}

struct pol_coord assign_pol_cmplx (double module, double rad_angle) {
    struct pol_coord resultado;
    resultado.module = module;
    resultado.rad_angle = rad_angle;
    resultado.deg_angle = rad_to_sexagesimal(resultado.rad_angle);
    return resultado;
}

struct cmplx_num assign_cmplx_number (t_coord type, double coord_1, double coord_2) {
    struct cmplx_num resultado;
    switch (type) {
        case REC:
            resultado.rec = assign_rec_cmplx(coord_1, coord_2);
            resultado.pol = rec_to_pol(resultado.rec);
        break;
        case POL:
            resultado.pol = assign_pol_cmplx(coord_1, coord_2);
            resultado.rec = pol_to_rec(resultado.pol);
        break;
        default: break;
    }
    return resultado;
}

struct rec_coord rec_cmplx_suma (struct rec_coord z1, struct rec_coord z2) {
    struct rec_coord resultado;
    resultado.x = z1.x + z2.x;
    resultado.y = z1.y + z2.y;
    return resultado;
}

struct rec_coord rec_cmplx_resta (struct rec_coord z1, struct rec_coord z2) {
    struct rec_coord resultado;
    resultado.x = z1.x - z2.x;
    resultado.y = z1.y - z2.y;
    return resultado;
}

struct pol_coord pol_cmplx_mul (struct pol_coord z1, struct pol_coord z2) {
    struct pol_coord resultado;
    resultado.module = z1.module * z2.module;
    resultado.rad_angle = z1.rad_angle + z2.rad_angle;
    resultado.deg_angle = rad_to_sexagesimal(resultado.rad_angle);
    return resultado;
}

struct pol_coord pol_cmplx_div (struct pol_coord z1, struct pol_coord z2) {
    struct pol_coord resultado;
    resultado.module = z1.module / z2.module;
    resultado.rad_angle = z1.rad_angle - z2.rad_angle;
    resultado.deg_angle = rad_to_sexagesimal(resultado.rad_angle);
    return resultado;
}

struct pol_coord pol_cmplx_pow (struct pol_coord z, double power) {
    struct pol_coord resultado;
    resultado.module = pow(z.module, power);
    resultado.rad_angle = z.rad_angle * power;
    resultado.deg_angle = rad_to_sexagesimal(resultado.rad_angle);
    return resultado;
}

struct cmplx_num cmplx_suma (struct cmplx_num z1, struct cmplx_num z2) {
    struct cmplx_num resultado;
    resultado.rec = rec_cmplx_suma(z1.rec, z2.rec);
    resultado.pol = rec_to_pol(resultado.rec);
    return resultado;
}

struct cmplx_num cmplx_resta (struct cmplx_num z1, struct cmplx_num z2) {
    struct cmplx_num resultado;
    resultado.rec = rec_cmplx_resta(z1.rec, z2.rec);
    resultado.pol = rec_to_pol(resultado.rec);
    return resultado;
}

struct cmplx_num cmplx_mul (struct cmplx_num z1, struct cmplx_num z2) {
    struct cmplx_num resultado;
    resultado.pol = pol_cmplx_mul(z1.pol, z2.pol);
    resultado.rec = pol_to_rec(resultado.pol);
    return resultado;
}

struct cmplx_num cmplx_div (struct cmplx_num z1, struct cmplx_num z2) {
    struct cmplx_num resultado;
    resultado.pol = pol_cmplx_div(z1.pol, z2.pol);
    resultado.rec = pol_to_rec(resultado.pol);
    return resultado;
}

struct cmplx_num cmplx_pow (struct cmplx_num z, double power) {
    struct cmplx_num resultado;
    resultado.pol = pol_cmplx_pow(z.pol, power);
    resultado.rec = pol_to_rec(resultado.pol);
    return resultado;
}

void print_cmplx (struct cmplx_num z, t_coord type) {
    switch (type) {
        case REC:
            if (z.rec.y < 0) printf("%.4f - %.4f i", z.rec.x, -z.rec.y);
            else printf("%.4f + %.4f i", z.rec.x, z.rec.y);
        break;
        case POL:
            printf("%.4f <%.4f rad", z.pol.module, z.pol.rad_angle);
        break;
        default: break;
    }
}
