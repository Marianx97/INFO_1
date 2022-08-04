#include <stdio.h>

int main (void) {
    int a_hoy = 0, m_hoy = 0, d_hoy = 0,
    a_nacimiento = 0, m_nacimiento = 0, d_nacimiento = 0,
    a_edad = 0, m_edad = 0, d_edad = 0;
    printf("Para comenzar, ingrese la fecha del dia de hoy.\n");
    printf("Ingrese el anio: "); scanf("%d", &a_hoy);
    printf("Ingrese el mes: "); scanf("%d", &m_hoy);
    printf("Ingrese el dia: "); scanf("%d", &d_hoy);

    // Validaciones fecha de hoy
    if (a_hoy < 0) {
        printf("El anio debe ser un valor mayor o igual a 0.\n");
        return -1;
    }
    if (m_hoy < 1 || 12 < m_hoy) {
        printf("El mes debe ser un valor entre 1 y 12.\n");
        return -1;
    }
    if ((m_hoy == 1 || m_hoy == 3 || m_hoy == 5 || m_hoy == 7 || m_hoy == 8 || m_hoy == 10 || m_hoy == 12) && (d_hoy < 1 || d_hoy > 31)) {
        printf("Para el mes %d, el dia debe ser un valor entre 1 y 31\n", m_hoy);
        return -1;
    } else if ((m_hoy == 4 || m_hoy == 6 || m_hoy == 9 || m_hoy == 11) && (d_hoy < 1 || d_hoy > 30)) {
        printf("Para el mes %d, el dia debe ser un valor entre 1 y 30\n", m_hoy);
        return -1;
    } else if (m_hoy == 2 && (d_hoy < 1 || d_hoy > 28)) {
        printf("Para febrero, el dia debe ser un valor entre 1 y 28\n");
        return -1;
    }

    printf("Ingrese la fecha de su nacimiento.\n");
    printf("Ingrese el anio: "); scanf("%d", &a_nacimiento);
    printf("Ingrese el mes: "); scanf("%d", &m_nacimiento);
    printf("Ingrese el dia: "); scanf("%d", &d_nacimiento);

    // Validaciones fecha de nacimiento
    if (a_nacimiento < 0) {
        printf("El anio debe ser un valor mayor o igual a 0.\n");
        return -1;
    }
    if (m_nacimiento < 1 || 12 < m_nacimiento) {
        printf("El mes debe ser un valor entre 1 y 12.\n");
        return -1;
    }
    if ((m_nacimiento == 1 || m_nacimiento == 3 || m_nacimiento == 5 || m_nacimiento == 7 || m_nacimiento == 8 || m_nacimiento == 10 || m_nacimiento == 12) && (d_nacimiento < 1 || d_nacimiento > 31)) {
        printf("Para el mes %d, el dia debe ser un valor entre 1 y 31\n", m_nacimiento);
        return -1;
    } else if ((m_nacimiento == 4 || m_nacimiento == 6 || m_nacimiento == 9 || m_nacimiento == 11) && (d_nacimiento < 1 || d_nacimiento > 30)) {
        printf("Para el mes %d, el dia debe ser un valor entre 1 y 30\n", m_nacimiento);
        return -1;
    } else if (m_nacimiento == 2 && (d_nacimiento < 1 || d_nacimiento > 28)) {
        printf("Para febrero, el dia debe ser un valor entre 1 y 28\n");
        return -1;
    }

    // Validaciones nacido en el futuro
    if (a_nacimiento > a_hoy) {
        printf("¿Acaso usted viene del futuro? El anio de su nacimiento no puede ser mayor al de la fecha de hoy.\n");
        return -1;
    } else if (a_nacimiento == a_hoy) {
        if (m_nacimiento > m_hoy) {
            printf("¿Acaso usted viene del futuro? El mes de su nacimiento no puede ser mayor al de la fecha de hoy si el año es el mismo.\n");
            return -1;
        } else if (m_nacimiento == m_hoy) {
            if (d_nacimiento > d_hoy) {
                printf("¿Que hace usted aqui? Su nacimiento no es hasta dentro de %d dias, vuelva a ese utero.\n", d_nacimiento - d_hoy);
                return -1;
            }
        }
    }
    if (a_hoy == a_nacimiento && m_hoy == m_nacimiento && d_hoy == d_nacimiento) {
        printf("Usted nacio hoy!\n¿No es muy joven para estar usando una computadora?\n");
    } else {
        a_edad = a_hoy - a_nacimiento;
        if (m_hoy - m_nacimiento < 0) {
            a_edad--;
            m_hoy += 12;
            m_edad = m_hoy - m_nacimiento;
        } else m_edad = m_hoy - m_nacimiento;
        if (d_hoy - d_nacimiento < 0) {
            m_edad--;
            if (m_nacimiento == 1 || m_nacimiento == 3 || m_nacimiento == 5 || m_nacimiento == 7 || m_nacimiento == 8 || m_nacimiento == 10 || m_nacimiento == 12) d_hoy += 31;
            else if (m_nacimiento == 4 || m_nacimiento == 6 || m_nacimiento == 9 || m_nacimiento == 11) d_hoy += 30;
            else d_hoy += 28;
            d_edad = d_hoy - d_nacimiento;
        }
        printf("Usted tiene %d anios, %d meses y %d dias de edad.\n", a_edad, m_edad, d_edad);
    }   
    return 0;
}