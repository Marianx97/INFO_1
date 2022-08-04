#include "../inc/funciones.h"

int CargarPalabras (const char * filename, PALABRAS** word_list) {
    int str_index = 0, word_cnt = 0;
    char str_buffer[31], c;
    bool str_found = false;
    FILE * input_file;
    input_file = fopen(filename, "r");
    if (input_file == NULL) {
        perror("error opening file\n");
        return -1;
    }
    do {
        c = fgetc(input_file);
        if (c != ' ' && c != ',' && c != '.' && c != EOF) {
            str_buffer[str_index] = c;
            str_index++;
        } else {
            str_buffer[str_index] = '\0';
            if (!empty_string(str_buffer) ) {
                my_strlwr(str_buffer);
                // cargamos el string en el array
                if (word_cnt != 0) {
                    for (int i = 0; i < word_cnt && !str_found; i++) {
                        if (my_strcmp(word_list[i]->nombre, str_buffer) == 0) {
                            word_list[i]->cantidad++;
                            str_found = true;
                        }
                    }
                }
                if (!str_found) {
                    word_list[word_cnt] = (PALABRAS *) malloc(sizeof(PALABRAS));
                    strcpy(word_list[word_cnt]->nombre, str_buffer);
                    word_list[word_cnt]->cantidad = 1;
                    word_cnt++;
                }
                str_found = false;
            }
            str_index = 0;
            str_buffer[str_index] = '\0';
        }
    } while (c != EOF);
    fclose(input_file);
    return word_cnt;
}

int EscribirPalabrasEnArchivo(PALABRAS** words, int word_cnt, const char * filename) {
    FILE * output_file;
    output_file = fopen(filename, "wb");
    if (output_file == NULL) {
        perror("error opening file\n");
        return -1;
    }
    order_words_array(words, word_cnt);
    for (int i = 0; i < word_cnt; i++) {
        // escribir en el archivo
        if (fwrite(words[i], sizeof(PALABRAS), 1, output_file) == 0) return -1;
    }
    return 0;
}

void order_words_array(PALABRAS** words, int word_cnt) {
    PALABRAS aux;
    int change = 1;
    for (int i = 0; i < word_cnt && change == 1; i++) {
        change = 0;
        for (int j = i + 1; j < word_cnt; j++) {
            if (my_strcmp(words[i]->nombre, words[j]->nombre) > 0) {
                change = 1;
                aux.cantidad = words[j]->cantidad;
                my_strcpy(aux.nombre, words[j]->nombre);
                words[j]->cantidad = words[i]->cantidad;
                my_strcpy(words[j]->nombre, words[i]->nombre);
                words[i]->cantidad = aux.cantidad;
                my_strcpy(words[i]->nombre, aux.nombre);
                j = i;
            }
        }
    }
    return;
}

void free_words_array(PALABRAS** word_list, int word_cnt) {
    for (int i = 0; i < word_cnt; i++) free(word_list[i]);
    return;
}