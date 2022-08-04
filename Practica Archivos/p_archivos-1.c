#include <stdio.h>
#include "../Biblioteca/inc/my_string.h"

int main (int argc, char **argv) {
    if (argc < 3) {
        perror("Arg error! usage: p_archivos-1 input.txt output.txt\n");
        return -1;
    }
    
    if (!str_includes(argv[1], ".txt") && !str_includes(argv[2], ".txt")) {
        perror("Arg error! input and output files must be \".txt\"\n");
        return -2;
    }
    
    FILE * input_file, * output_file;
    char buffer[100], *nombre[31], ** str_arr;
    int cant_nombres = 0;
    str_arr = malloc(1 * sizeof(char *));
    input_file = fopen(argv[1], "r");
    output_file = fopen(argv[2], "w");
    while (fgets(buffer, 100, input_file) != NULL) {
        cant_nombres = split(buffer, ",", str_arr);
        printf("cant_nombres: %d\n", cant_nombres);
        for (int i = 0; i < cant_nombres-1; i++) {
            fputs(str_arr[i], output_file);
            fputs("\n", output_file);
        }
        free_split(str_arr, cant_nombres);
    }
    return 0;
}