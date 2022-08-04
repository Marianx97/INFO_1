#include "my_socket.h"

int main (void) {
    int sockfd, sin_size = sizeof(struct sockaddr_in);
    struct sockaddr_in my_addr;
    char buffer[100];
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    load_sockaddr_in(&my_addr);
    bind(sockfd, (struct sockaddr *) &my_addr, sizeof(struct sockaddr));
    connect(sockfd, (struct sockaddr *) &my_addr, sin_size);
    recv(sockfd, buffer, 100, 0);
    printf("%s", buffer);
    return 0;
}