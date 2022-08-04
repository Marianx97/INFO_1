#include "../Biblioteca/inc/my_files.h"
#include "../Biblioteca/inc/my_string.h"

int main (void) {
    FILE * file;
    char string[] = "Hola Marley!";
    if ((file = fopen("../Archivos/EJ_6-55_file.txt", "w")) == NULL) {
        printf("Couldn't open datafile.dat for reading\n");
        return -1;
    }
    print_plain_strings(file, string, my_strlen(string));
}