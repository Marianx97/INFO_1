#include "./inc/funciones.h"

int main (int argc, char **argv) {
    if (argc != 5) {
        perror("Arg error! usage: 'main -i input_file -o output_file' or 'main -o output_file -i input_file'\n");
        return -1;
    }

    // caso 1: que argv[1] sea distinto de -i y distinto de -o
    // caso 2: que argv[3] sea distinto de -i y distinto de -o
    // caso 3: que argv[1] y argv[3] sean iguales
    if (((strcmp(argv[1], "-i") != 0) && (strcmp(argv[1], "-o") != 0)) ||
        ((strcmp(argv[3], "-o") != 0) && (strcmp(argv[3], "-i") != 0)) ||
        (strcmp(argv[1], argv[3]) == 0)) {
        perror("Arg error! usage: 'main -i input_file -o output_file' or 'main -o output_file -i input_file'\n");
        return -1;
    }

    /*
    char *input_file_name, *output_file_name, *buffer;

    if (strcmp(argv[1], "-i") == 0) {
        strcpy(input_file_name, argv[2]);
        strcpy(output_file_name, argv[4]);
    } else {
        strcpy(input_file_name, argv[4]);
        strcpy(output_file_name, argv[2]);
    }
    */

    int word_cnt = 0, write_out = 0, pid, pipe_fd[2];
    PALABRAS ** word_list = NULL;
    
    word_list = (PALABRAS **) malloc((word_cnt+1) * sizeof(PALABRAS *));
    if (strcmp(argv[1], "-i") == 0) word_cnt = CargarPalabras(argv[2], word_list);
    else word_cnt = CargarPalabras(argv[4], word_list);

    // word_cnt = CargarPalabras(input_file_name, word_list);

    for (int i = 0; i < word_cnt; i++) {
        printf("Se encontro %d veces la palabra %s\n", word_list[i]->cantidad, word_list[i]->nombre);
    }
    
    if (strcmp(argv[1], "-i") == 0) write_out = EscribirPalabrasEnArchivo(word_list, word_cnt, argv[4]);
    else write_out = EscribirPalabrasEnArchivo(word_list, word_cnt, argv[2]);

    if (write_out < 0) {
        perror("Algo rompio al escribir\n");
        return -1;
    }

    /*
    // pipe_fd[0] - read
    // pipe_fd[1] - write
    if (pipe(pipe_fd) == -1) {
        perror("An error ocurred when opening the pipe!\n");
        return -2;
    }
    
    // fork returns:
    // - 0 for child proccess
    // - child_pid for parent process
    // - (-1) on failure
    pid = fork();
    if (pid == -1) {
        perror("An error ocurred when forking!\n");
        return -3;
    } else if (pid != 0) { // parent process
        close(pipe_fd[0]); // parent doesn't read
        fwrite(output_file_name, sizeof(char), strlen(output_file_name), pipe_fd[1]);
        close(pipe_fd[1]); // parent doesn't have to write anymore
        wait(); // parent waits for child process to finish
    } else {
        close(pipe_fd[1]); // child doesn't write
        fread(output_file_name, sizeof(char), strlen(output_file_name), pipe_fd[0]);
        close(pipe_fd[1]); // child doesn't have to read anymore
        EscribirPalabrasEnArchivo(word_list, word_cnt, output_file_name);
    }
    
    free_words_array(word_list, word_cnt);
    free(word_list);
    */
    return 0;
}