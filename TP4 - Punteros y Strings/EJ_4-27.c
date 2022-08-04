#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char ip[] = "181.169.73.33", non_ip[] = "500", non_ip_2[] = "897.54.123.999",
    email[] = "mariano.ranucci@gmail.com", non_email[] = "muchas bananas",
    ccn_1[] = "379354508162306", ccn_2[] = "4388576018402626";
    // if (str_is_ip(ip)) printf("'%s' es una direccion de ip.\n", ip);
    // if (!str_is_ip(non_ip)) printf("'%s' no es una direccion de ip.\n", non_ip);
    // if (!str_is_ip(non_ip_2)) printf("'%s' no es una direccion de ip.\n", non_ip_2);
    // if (str_is_email(email)) printf("'%s' es una direccion de correo valida.\n", email);
    // if (str_is_credit_card(ccn_1)) printf("'%s' es un numero de tarjeta de credito valido\n", ccn_1);
    // if (!str_is_credit_card(ccn_2)) printf("'%s' no es un numero de tarjeta de credito valido\n", ccn_2);
    if (validate_string(ip, str_is_ip)) printf("'%s' es una direccion de ip.\n", ip);
    if (!validate_string(non_ip, str_is_ip)) printf("'%s' no es una direccion de ip.\n", non_ip);
    if (!validate_string(non_ip_2, str_is_ip)) printf("'%s' no es una direccion de ip.\n", non_ip_2);
    if (validate_string(email, str_is_email)) printf("'%s' es una direccion de correo valida.\n", email);
    if (!validate_string(non_email, str_is_email)) printf("'%s' no es una direccion de correo valida.\n", non_email);
    if (validate_string(ccn_1, str_is_credit_card)) printf("'%s' es un numero de tarjeta de credito valido\n", ccn_1);
    if (!validate_string(ccn_2, str_is_credit_card)) printf("'%s' no es un numero de tarjeta de credito valido\n", ccn_2);
    return 0;
}