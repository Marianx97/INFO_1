#include "../inc/my_string.h"

bool empty_string (const char *p) {
    return p[0] == '\0';
}

int my_strlen (const char * string) {
    int strlen = 0;
    if (string[strlen] != '\0') while (string[strlen] != '\0') strlen++;
    return strlen;
}

void my_strcpy (char *t, const char *s) {
    int s_length = my_strlen(s);
    for (int i = 0; i < s_length; i++) t[i] = s[i];
    t[s_length] = '\0';
}

void my_strncpy (char *t, const char *s, int n) {
    for (int i = 0; i < n; i++) t[i] = s[i];
}

void my_strcat (char *t, const char *s) {
    int t_length = my_strlen(t), s_length = my_strlen(s);
    for (int i = t_length; i < (t_length + s_length); i++) t[i] = s[i - t_length];
    t[t_length + s_length] = '\0';
}

int my_strcmp (const char *t, const char *s) {
    int t_length = my_strlen(t);
    for (int i = 0; i <= t_length; i++) if (t[i] > s[i]) return 1; else if (t[i] < s[i]) return -1;
    return 0;
}

int my_strncmp (const char *s1, const char *s2, int n) {
    int s1_length = my_strlen(s1), length = 0;
    if (s1_length < n) length = s1_length; else length = n;
    for (int i = 0; i <= length; i++) if (s1[i] - s2[i] != 0) return s1[i] - s2[i];
    return 0;
}

void my_strlwr (char *string) {
    int str_len = my_strlen(string);
    for (int i = 0; i < str_len; i++) if (65 <= (int) string[i] && (int) string[i] <= 90) string[i] += 32;
}

void my_strupr (char *string) {
    int str_len = my_strlen(string);
    for (int i = 0; i < str_len; i++) if (97 <= (int) string[i] && (int) string[i] <= 122) string[i] -= 32;
}

void string_reverse (char * string) {
    int string_length = my_strlen(string);
    char reverse_string[string_length + 1];
    for (int i = 1; i <= string_length; i++) reverse_string[i-1] = string[string_length - i];
    reverse_string[string_length] = '\0';
    my_strcpy(string, reverse_string);
}

void change_case (char * string, s_case format) {
    switch (format) {
    case UPPERCASE:
        my_strupr(string);
        break;
    case LOWERCASE:
        my_strlwr(string);
        break;
    default: break;
    }
}

void replace (char *s, char nuevo, char viejo) {
    int s_length = my_strlen(s);
    for (int i = 0; i < s_length; i++) if (s[i] == viejo) s[i] = nuevo;
}

void left_trim (char * s) {
    int s_length = 0;
    while (s[0] == ' ') {
        s_length = my_strlen(s);
        for (int i = 0; i < s_length; i++) s[i] = s[i + 1];
    }
}

void right_trim (char * s) {
    int s_length = my_strlen(s);
    while (s[s_length-1] == ' ') {
        s[s_length-1] = s[s_length];
        s_length = my_strlen(s);
    }
}

bool str_includes (char *string, char *sub_string) {
    bool includes = false;
    int s_length = my_strlen(string), ss_length = my_strlen(sub_string), i = 0, j = 0;
    while (i < s_length && j < ss_length) {
        if ((s_length - i) < (ss_length - j)) return false;
        includes = string[i] == sub_string[j];
        if (includes) j++;
        if (!includes) j = 0;
        i++;
    }
    return includes;
}

bool es_palindromo (const char * string) {
    bool es_palindromo = false;
    int s_length = my_strlen(string), i = 0;
    if (s_length == 1) return true;
    for (i = 0; i < s_length / 2; i++) {
        es_palindromo = string[i] == string[s_length - 1 - i];
        if (!es_palindromo) return false;
    }
    return es_palindromo;
} 

bool char_is_num (char c) {
    if ('0' <= c  && c <= '9') return true;
    else return false;
}

bool str_is_ip (char * ip) {
    int ip_len = my_strlen(ip);
    if (ip_len < 7 || 15 < ip_len) return false;
    for (int i = 0; i < ip_len; i++) if ((ip[i] != '.') && !char_is_num(ip[i])) return false;
    if (my_strcmp(ip, "0.0.0.0") == -1 || my_strcmp(ip, "255.255.255.254") == 1) return false;
    return true;
}

bool str_is_email (char * email) {
    return str_includes(email, "@") && str_includes(email, ".com") && !str_includes(email, " ");
}

bool str_is_credit_card (char * card_number) {
    int cn_len = my_strlen(card_number), i = 0, j = 0, suma_1 = 0, suma_2 = 0;
    if (cn_len < 13 || 16 < cn_len) return false;
    for (i = 0; i < cn_len; i++) if (!char_is_num(card_number[i])) return false;
    for (i = cn_len - 2; i >= 0; i -= 2) {
        if ((card_number[i] - 48) * 2 > 10) suma_1 += ((card_number[i] - 48) * 2) / 10 + ((card_number[i] - 48) * 2) % 10;
        else suma_1 += (card_number[i] - 48) * 2;
    }
    for (i = cn_len - 1; i >= 0; i -= 2) suma_2 += card_number[i] - 48;
    return (suma_1 + suma_2) % 10 == 0;
}

bool validate_string (char * string, bool (*pf) (char *)) {
    return pf(string);
}

void random_load (char * string, int s_length) {
    for (int i = 0; i < s_length; i++) {
        string[i] = (rand() % 93) + 33;
    }
    printf("%s\n", string);
}

void random_load_reversal (char * string, int s_length) {
    for (int i = 0; i < s_length; i++) {
        string[i] = (rand() % 93) + 33;
    }
    string_reverse(string);
    printf("%s\n", string);
}

int int_strcmp (char * num_str_1, char * num_str_2) {
    int num_1 = atoi(num_str_1), num_2 = atoi(num_str_2);
    if (num_1 == num_2) return 0;
    if (num_1 > num_2) return -1;
    if (num_1 < num_2) return 1;
}

int float_strcmp (char * num_str_1, char * num_str_2) {
    float num_1 = atof(num_str_1), num_2 = atof(num_str_2);
    if (num_1 == num_2) return 0;
    if (num_1 > num_2) return -1;
    if (num_1 < num_2) return 1;
}

void ftoa (float number, char * string) {
    int p_entera = (int) number, resto = 0, indice = 0, c_decimales = 0;
    float p_decimal = number - (float) p_entera;
    do {
        string[indice] = (p_entera % 10) + 48;
        p_entera /= 10;
        indice++;
    } while (p_entera > 0);
    string[indice] = '\0';
    string_reverse(string);
    my_strcat(string, ".");
    indice++;
    do {
        p_decimal *= 10;
        p_entera = (int) p_decimal;
        string[indice] = p_entera + 48;
        p_decimal -= p_entera;
        indice++;
        c_decimales++;
    } while (c_decimales < 8);
    string[indice] = '\0';
    return;
}

int split (char * string, char * separator, char ** str_arr) {
    int s_length = my_strlen(string), i = 0;
    char aux_str[s_length], * token;
    my_strcpy(aux_str, string);
    token = strtok(aux_str, separator);
    while (token != NULL) {
        str_arr[i] = malloc(my_strlen(token) * sizeof(char));
        my_strcpy(str_arr[i], token);
        token = strtok(NULL, separator);
        i++;
    }
    return i;
}

void free_split (char ** str_arr, int size) {
    for (int i = 0; i < size; i++) free(str_arr[i]);
    return;
}