#include "../inc/my_vectors.h"

void double_arr_order (double array[], int s_array, t_order order) {
    double aux_var = 0;
    int comparado = 0, comparacion = 1;
    while (comparado < s_array - 1) {
        switch (order) {
            case ASC:
                if (array[comparado] > array[comparacion]) {
                    aux_var = array[comparado];
                    array[comparado] = array[comparacion];
                    array[comparacion] = aux_var;
                    comparacion = comparado + 1;
                } else {
                    comparacion++;
                    if (s_array == comparacion) {
                        comparado++;
                        comparacion = comparado + 1;
                    }
                }
            break;

            case DESC:
                if (array[comparado] < array[comparacion]) {
                    aux_var = array[comparado];
                    array[comparado] = array[comparacion];
                    array[comparacion] = aux_var;
                    comparacion = comparado + 1;
                } else {
                    comparacion++;
                    if (s_array == comparacion) {
                        comparado++;
                        comparacion = comparado + 1;
                    }
                }
            break;
            default: break;
        }
    }
    return;
}

void int_arr_order (int array[], int s_array, t_order order) {
    int aux_var = 0, comparado = 0, comparacion = 1;
    while (comparado < s_array - 1) {
        switch (order) {
            case ASC:
                if (array[comparado] > array[comparacion]) {
                    aux_var = array[comparado];
                    array[comparado] = array[comparacion];
                    array[comparacion] = aux_var;
                    comparacion = comparado + 1;
                } else {
                    comparacion++;
                    if (s_array == comparacion) {
                        comparado++;
                        comparacion = comparado + 1;
                    }
                }
            break;

            case DESC:
                if (array[comparado] < array[comparacion]) {
                    aux_var = array[comparado];
                    array[comparado] = array[comparacion];
                    array[comparacion] = aux_var;
                    comparacion = comparado + 1;
                } else {
                    comparacion++;
                    if (s_array == comparacion) {
                        comparado++;
                        comparacion = comparado + 1;
                    }
                }
            break;
            default: break;
        }
    }
    return;
}

void pares (int array[], int s_array, int pares[]) {
    int indice = 0;
    for (int i = 0; i < s_array; i++) {
        if (array[i] % 2 == 0) {
            pares[indice] = array[i];
            indice++;
        }
    }
    return;
}

void impares (int array[], int s_array, int impares[]) {
    int indice = 0;
    for (int i = 0; i < s_array; i++) {
        if (array[i] % 2 != 0) {
            impares[indice] = array[i];
            indice++;
        }
    }
    return;
}

void negativos (int array[], int s_array, int negativos[]) {
    int indice = 0;
    for (int i = 0; i < s_array; i++) {
        if (array[i] < 0) {
            negativos[indice] = array[i];
            indice++;
        }
    }
    return;
}

void positivos (int array[], int s_array, int positivos[]) {
    int indice = 0;
    for (int i = 0; i < s_array; i++) {
        if (array[i] > 0) {
            positivos[indice] = array[i];
            indice++;
        }
    }
    return;
}

void print_int_vector (int vector[], int s_vector) {
    printf("[");
    for (int i = 0; i < s_vector; i++) printf("%d ", vector[i]);
    printf("]\n");
    return;
}

void print_double_vector (double vector[], int s_vector) {
    printf("[");
    for (int i = 0; i < s_vector; i++) printf("%f ", vector[i]);
    printf("]\n");
    return;
}

void scan_int_vector(int vector[], int s_vector) {
    for (int i = 0; i < s_vector; i++) {
        printf("Ingrese un numero entero: "); scanf("%d", vector+i);
    }
    return;
}

void scan_double_vector(double vector[], int s_vector) {
    for (int i = 0; i < s_vector; i++) {
        printf("Ingrese un numero real: "); scanf("%lf", vector+i);
    }
    return;
}

/*
pares: arreglo de valores pares
c_pares: cantidad de valores en el arreglo de pares
impares: arreglo de valores impares
c_impares: cantidad de valores en el arreglo de impares
negativos: arreglo de valores negativos
c_negativos: cantidad de valores en el arreglo de negativos
positivos: arreglo de valores positivos
c_positivos: cantidad de valores en el arreglo de positivos
*/
void print_vectores (int pares[], int c_pares, int impares[], int c_impares, int negativos[], int c_negativos, int positivos[], int c_positivos) {
    int indice = 0;
    do {
        switch (indice) {
        case 0:
            if (c_impares <= c_pares && c_negativos <= c_pares && c_positivos <= c_pares) {
                printf("Pares:\n");
                print_int_vector(pares, c_pares);
                c_pares = 0;
            }
            indice++;
        break;
        case 1:
            if (c_pares <= c_impares && c_negativos <= c_impares && c_positivos <= c_impares) {
                printf("Impares:\n");
                print_int_vector(impares, c_impares);
                c_impares = 0;
            }
            indice++;
        break;
        case 2:
            if (c_pares <= c_negativos && c_impares <= c_negativos && c_positivos <= c_negativos) {
                printf("Negativos:\n");
                print_int_vector(negativos, c_negativos);
                c_negativos = 0;
            }
            indice++;
        break;
        case 3:
            if (c_pares <= c_positivos && c_impares <= c_positivos && c_negativos <= c_positivos) {
                printf("Positivos:\n");
                print_int_vector(positivos, c_positivos);
                c_positivos = 0;
            }
            indice++;
        break;
        default: indice = 0; break;
        }
    } while (c_pares || c_impares || c_negativos || c_positivos);
    return;
}

void quicksort (int array[], int inicio, int fin, t_order order) {
    int pivote = 0;
    if (inicio < fin) {
        pivote = particion(array, inicio, fin, order);
        quicksort(array, inicio, pivote - 1, order);
        quicksort(array, pivote + 1, fin, order);
    }
    return;
}

int particion (int array[], int inicio, int fin, t_order order) {
    int pivote = array[inicio], i = inicio, j = fin + 1, aux_var = 0;
    do {
        switch (order) {
        case ASC:
            do i++; while (array[i] < pivote && i <= fin);
            do j--; while (pivote < array[j]);
        break;

        case DESC:
            do i++; while (array[i] > pivote && i <= fin);
            do j--; while (pivote > array[j]);
        break;
        }
        if (i < j) {
            aux_var = array[i];
            array[i] = array[j];
            array[j] = aux_var;
        }
    } while (i < j);
    array[inicio] = array[j];
    array[j] = pivote;
    return j;
}

void burbuja (int array[], int s_array, t_order order) {
    int aux_var = 0;
    for (int i = 0; i < s_array; i++) {
        for (int j = i + 1; j < s_array; j++) {
            if (order_condition(array[j], array[i], order)) {
                aux_var = array[j];
                array[j] = array[i];
                array[i] = aux_var;
                j = i;
            }
        }
    }
    return;
}

void burbuja_m (int array[], int s_array, t_order order) {
    int aux_var = 0, change = 1;
    for (int i = 0; i < s_array && change == 1; i++) {
        change = 0;
        for (int j = i + 1; j < s_array; j++) {
            if (order_condition(array[j], array[i], order)) {
                change = 1;
                aux_var = array[j];
                array[j] = array[i];
                array[i] = aux_var;
                j = i;
            }
        }
    }
    return;
}

bool order_condition (int a, int b, t_order order) {
    switch (order) {
        case ASC: return a < b; break;
        case DESC: return a > b; break;
    }
}

void seleccion (int array[], int s_array, t_order order) {
    int extremo = 0, indice = 0, aux_var = 0;
    for (int i = 0; i < s_array; i++) {
        if (order == ASC) extremo = int_obtener_minimo(array + i, s_array - i, &indice);
        if (order == DESC) extremo = int_obtener_maximo(array + i, s_array - i, &indice);
        indice += i;
        if (i != indice) {
            aux_var = array[i];
            array[i] = extremo;
            array[indice] = aux_var;
        }
    }
    return;
}

int int_obtener_minimo (int array[], int s_array, int * indice) {
    int minimo = 0;
    for (int i = 0; i < s_array; i++) {
        if (i == 0) {
            minimo = array[i];
            *indice = i;
        } else if (array[i] < minimo) {
            minimo = array[i];
            *indice = i;
        }
    }
    return minimo;
}

int int_obtener_maximo (int array[], int s_array, int * indice) {
    int maximo = 0;
    for (int i = 0; i < s_array; i++) {
        if (i == 0) {
            maximo = array[i];
            *indice = i;
        } else if (maximo < array[i]) {
            maximo = array[i];
            *indice = i;
        }
    }
    return maximo;
}

void random_initialize (int array[], int s_array, int max_value) {
    for (int i = 0; i < s_array; i++) array[i] = rand() % (2 * max_value) - max_value;
    return;
}

void sinu_samples (double array[], int s_array, double A, double f, double phi) {
    // t_sample es el periodo de muestreo. Para que el muestreo sea efectivo, se debe muestrear
    // a una frecuencia superior a 2 veces la frecuencia de la señal. En este caso se tomo una 
    // frecuencia 10 veces mayor.
    double t_sample = 1 / (10 * f), t = 0;
    for (int i = 0; i < s_array; i++) {
        array[i] = sin_wave(A, f, t, phi);
        t += t_sample;
    }
    return;
}

void poli_samples (double array[], int s_array, double inicio, double fin, double coeficientes[], int grado) {
    double dx = (fin - inicio) / (double) (s_array - 1), x = inicio;
    for (int i = 0; i < s_array; i++) {
        array[i] = polinomio_x(coeficientes, grado, x);
        x += dx;
    }
    return;
}

void cargar_alumno (char legajos[70][9], char apellidos[70][15], char nombres_1[70][15], char nombres_2[70][10], int notas[70], int contador) {
    printf("Ingrese nro de legajo: "); scanf("%s", legajos[contador]);
    if (my_strcmp(legajos[contador], "99999999") == 0) return;
    printf("Ingrese el apellido del alumno: "); scanf("%s", apellidos[contador]);
    printf("Ingrese el 1er nombre del alumno: "); scanf("%s", nombres_1[contador]);
    printf("Ingrese el 2do nombre del alumno (de no tener, marcar con '-'): "); scanf("%s", nombres_2[contador]);
    printf("Ingrese la nota del alumno: "); scanf("%d", &notas[contador]);
    printf("--o--o--o--\n");
    ordenar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador);
    return;
}

void ordenar_alumnos(char legajos[70][9], char apellidos[70][15], char nombres_1[70][15], char nombres_2[70][10], int notas[70], int contador) {
    int nota_maxima = 0, aux_nota = 0, i = 0;
    char aux_legajo[9], aux_apellido[15], aux_nombre_1[15], aux_nombre_2[10];
    if (contador) {
        i = 0;
        do {
            if (notas[i] < notas[contador]) {
                desplazar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador, i);
                i = contador;
            } else if (notas[i] == notas[contador]) {
                do {
                    if (my_strcmp(apellidos[i], apellidos[contador]) > 0) {
                        desplazar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador, i);
                        i = contador;
                    } else if (my_strcmp(apellidos[i], apellidos[contador]) < 0) {
                        desplazar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador, i + 1);
                        i = contador;
                    } else if (my_strcmp(apellidos[i], apellidos[contador]) == 0) {
                        do {
                            if (my_strcmp(nombres_1[i], nombres_1[contador]) > 0) {
                                desplazar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador, i);
                                i = contador;
                            } else if (my_strcmp(nombres_1[i], nombres_1[contador]) < 0) {
                                desplazar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador, i + 1);
                                i = contador;
                            } else if (my_strcmp(nombres_1[i], nombres_1[contador]) == 0) {
                                do {
                                    if (my_strcmp(nombres_1[i], nombres_2[contador]) > 0) {
                                        desplazar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador, i);
                                        i = contador;
                                    } else if (my_strcmp(nombres_2[i], nombres_2[contador]) < 0) {
                                        desplazar_alumnos(legajos, apellidos, nombres_1, nombres_2, notas, contador, i + 1);
                                        i = contador;
                                    } else i++;
                                } while (i < contador);
                            } else i++;
                        } while (i < contador);
                    } else i++;
                } while (i < contador);
            } else i++;
        } while (i < contador);
    }
    return;
}

void desplazar_alumnos (char legajos[70][9], char apellidos[70][15], char nombres_1[70][15], char nombres_2[70][10], int notas[70], int contador, int indice) {
    int aux_nota = 0;
    char aux_legajo[9], aux_apellido[15], aux_nombre_1[15], aux_nombre_2[10];
    
    my_strcpy(aux_legajo, legajos[contador]);
    my_strcpy(aux_apellido, apellidos[contador]);
    my_strcpy(aux_nombre_1, nombres_1[contador]);
    my_strcpy(aux_nombre_2, nombres_2[contador]);
    aux_nota = notas[contador];
    for (int j = contador; indice <= j; j--) {
        my_strcpy(legajos[j], legajos[j - 1]);
        my_strcpy(apellidos[j], apellidos[j - 1]);
        my_strcpy(nombres_1[j], nombres_1[j - 1]);
        my_strcpy(nombres_2[j], nombres_2[j - 1]);
        notas[j] = notas[j - 1];
    }
    my_strcpy(legajos[indice], aux_legajo);
    my_strcpy(apellidos[indice], aux_apellido);
    my_strcpy(nombres_1[indice], aux_nombre_1);
    my_strcpy(nombres_2[indice], aux_nombre_2);
    notas[indice] = aux_nota;
    return;
}

void print_alumno (char legajo[], char apellido[], char nombre_1[], char nombre_2[], int nota) {
    char nombre_completo[40];
    int l_nombre = 0;
    my_strcpy(nombre_completo, apellido);
    my_strcat(nombre_completo, " ");
    my_strcat(nombre_completo, nombre_1);
    l_nombre += my_strlen(apellido) + my_strlen(nombre_1) + 1;
    if (!empty_string(nombre_2)) {
        my_strcat(nombre_completo, " ");
        my_strcat(nombre_completo, nombre_2);
        l_nombre += my_strlen(nombre_2) + 1;
    }
    for (int i = l_nombre; i < 39; i++) nombre_completo[i] = ' ';
    nombre_completo[40] = '\0';
    printf(" %s | %s | %d\n", legajo, nombre_completo, nota);
    return;
}

void print_matriz_double(int n_filas, int m_columnas, double matriz[n_filas][m_columnas]) {
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < m_columnas; j++) printf("%.2f ", matriz[i][j]);
        printf("\n");
    }
    return;
}

void print_matriz_int(int n_filas, int m_columnas, int matriz[n_filas][m_columnas]) {
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < m_columnas; j++) printf("%d ", matriz[i][j]);
        printf("\n");
    }
    return;
}

bool matriz_simetrica (int n_filas, int m_columnas, double matriz[n_filas][m_columnas]) {
    if (n_filas != m_columnas) return false;
    for (int i = 0; i < n_filas; i++)
        for (int j = 0 + i; j < m_columnas; j++) if (matriz[i][j] != matriz[j][i]) return false;
    return true;
}

double traza_de_matriz (int n_filas, int m_columnas, double matriz[n_filas][m_columnas]) {
    double traza = 0;
    for (int i = 0; i < n_filas; i++) traza += matriz[i][i];
    return traza;
}

double determinante_2x2 (double matriz[2][2]) {
    return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

void cargar_matriz_auxiliar (
    int n_filas, int m_columnas, double matriz[n_filas][m_columnas],
    double matriz_aux[n_filas-1][m_columnas-1], int posicion_f, int posicion_c
    ) {
    int indice_fila = 0, indice_columna = 0;
    for (int fila = 0; fila < n_filas; fila++) {
        for (int columna = 0; columna < m_columnas; columna++) {
            if (fila != posicion_f && columna != posicion_c) {
                matriz_aux[indice_fila][indice_columna] = matriz[fila][columna];
                if (indice_columna + 1 < m_columnas - 1) indice_columna++;
                else {
                    indice_columna = 0;
                    indice_fila++;
                }
            }
        }
    }
    return;
}

double determinante_nxm (int n_filas, int m_columnas, double matriz[n_filas][m_columnas]) {
    if (n_filas == 2 && m_columnas == 2) return determinante_2x2(matriz);
    double det = 0, a = 0, matriz_aux[n_filas - 1][m_columnas - 1];
    for (int i = 0; i < m_columnas; i++) {
        a = matriz[0][i];
        cargar_matriz_auxiliar(n_filas, m_columnas, matriz, matriz_aux, 0, i);
        if (0 + i % 2 != 0) a *= -1;
        det += a * determinante_nxm(n_filas-1, m_columnas-1, matriz_aux);
    }
    return det;
}

void matriz_transpuesta (int n_filas, int m_columnas, double matriz[n_filas][m_columnas], double matriz_t[m_columnas][n_filas]) {
    for (int i = 0; i < n_filas; i++) for (int j = 0; j < m_columnas; j++) matriz_t[j][i] = matriz[i][j];
    return;
}

void mul_matrices (int n_filas, int m_columnas, double matriz_a[n_filas][m_columnas], int m_filas, int p_columnas, double matriz_b[m_filas][p_columnas],double matriz_producto[n_filas][p_columnas]) {
    if (m_columnas != m_filas) return;
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < p_columnas; j++) {
            matriz_producto[i][j] = 0;
            for (int k = 0; k < m_columnas; k++) {
                matriz_producto[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
    return;
}

int obtener_extremo_int_matriz (int n_filas, int m_columnas, int matriz[n_filas][m_columnas], t_extremo tipo_de_extremo) {
    int extremo = 0;
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < m_columnas; j++) {
            if (i == 0 && j == 0) extremo = matriz[i][j];
            if (condicion_extremo_int(extremo, matriz[i][j], tipo_de_extremo)) extremo = matriz[i][j];
        }
    }
    return extremo;
}

void sort (void *vector[], size_t s_vector, void (* f_sort) (void *[], size_t, t_order), t_order order) {
    f_sort(vector, s_vector, order);
    return;
}

void cargar_alumnos_struct(struct alumno * alumnos) {
    int indice = 0;
    long legajo = 0;
    char apellido[31];
    char nombre[31];
    do {
        printf("Para finalizar la carga de datos, cargue el valor del legajo con un 0.\n");
        printf("Ingrese el legajo del alumno No %d: ", indice+1); scanf("%ld", &legajo);
        if (legajo != 0) {
            printf("Ingrese el apellido del alumno: "); scanf("%s", apellido);
            printf("Ingrese el nombre del alumno: "); scanf("%s", nombre);
            alumnos[indice].legajo = legajo;
            my_strcpy(alumnos[indice].apellido, apellido);
            my_strcpy(alumnos[indice].nombre, nombre);
            indice++;
        }
    } while (legajo != 0);
    return;
}

bool struct_alumnos_order_condition(struct alumno alumno_1, struct alumno alumno_2, t_order order) {
    int comparacion = my_strcmp(alumno_1.apellido, alumno_2.apellido);
    if (order == ASC) return comparacion < 0;
    if (order == DESC) return comparacion > 0;
}

void ordenar_alumnos_struct(struct alumno * alumnos, int c_alumnos, t_order order) {
    struct alumno aux;
    int change = 1;
    for (int i = 0; i < c_alumnos && change == 1; i++) {
        change = 0;
        for (int j = i + 1; j < c_alumnos; j++) {
            if (struct_alumnos_order_condition(alumnos[j], alumnos[i], order)) {
                change = 1;
                aux.legajo = alumnos[j].legajo;
                my_strcpy(aux.apellido, alumnos[j].apellido);
                my_strcpy(aux.nombre, alumnos[j].nombre);
                alumnos[j].legajo = alumnos[i].legajo;
                my_strcpy(alumnos[j].apellido, alumnos[i].apellido);
                my_strcpy(alumnos[j].nombre, alumnos[i].nombre);
                alumnos[i].legajo = aux.legajo;
                my_strcpy(alumnos[i].apellido, aux.apellido);
                my_strcpy(alumnos[i].nombre, aux.nombre);
                j = i;
            }
        }
    }
    return;
}

void print_alumno_struct(struct alumno alumno, FILE * file) {
    char legajo_str[8];
    int_to_num_str(alumno.legajo, legajo_str);
    fputs("| ", file);
    fputs(legajo_str, file);
    fputs(" | ", file);
    fputs(alumno.apellido, file);
    for (int j = 0; j < 15 - my_strlen(alumno.apellido); j++) fputs(" ", file);
    fputs(" | ", file);
    fputs(alumno.nombre, file);
    for (int k = 0; k < 15 - my_strlen(alumno.nombre); k++) fputs(" ", file);
    fputs(" |\n", file);
    return;
}

void print_alumnos_struct(struct alumno * alumnos, int c_alumnos, FILE * file) {
    char encabezado[] = "| legajo   | apellido        | nombre          |\n";
    fputs(encabezado, file);
    for (int i = 0; i < c_alumnos; i++) print_alumno_struct(alumnos[i], file);
    return;
}
