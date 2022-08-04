#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef enum { UPPERCASE, LOWERCASE } s_case ;

bool empty_string (const char *);
int my_strlen (const char *) ;
void my_strcpy (char *, const char *);
void my_strncpy (char *, const char *, int);
void my_strcat (char *, const char *);
int my_strcmp (const char *, const char *);
int my_strncmp (const char *, const char *, int);
void my_strlwr (char *);
void my_strupr (char *);
void string_reverse (char *);
void change_case (char *, s_case);
void replace (char *, char, char);
void left_trim (char *);
void right_trim (char *);
bool str_includes (char *, char *);
bool es_palindromo (const char *) ;
bool char_is_num (char);
bool str_is_ip (char *);
bool str_is_email (char *);
bool str_is_credit_card (char *);
bool validate_string (char *, bool (*) (char *));
void random_load (char *, int);
void random_load_reversal (char *, int);
int int_strcmp (char *, char *);
int float_strcmp (char *, char *);
void ftoa (float, char *);
int split (char *, char *, char **);
void free_split (char **, int);