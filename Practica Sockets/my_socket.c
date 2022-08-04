#include "my_socket.h"

void load_sockaddr_in (struct sockaddr_in * my_addr) {
    my_addr->sin_family = AF_INET;
    my_addr->sin_port = htons(PORT);
    my_addr->sin_addr.s_addr = inet_addr(HOST_ADDR);
    memset(&(my_addr->sin_zero), '\0', 8);
    return;
}
