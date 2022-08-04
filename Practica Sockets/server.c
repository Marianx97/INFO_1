#include "my_socket.h"

int main (void) {
    int sockfd, new_fd, sin_size = sizeof(struct sockaddr_in);
    struct sockaddr_in my_addr, client_addr;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    load_sockaddr_in(&my_addr);
    bind(sockfd, (struct sockaddr *) &my_addr, sizeof(struct sockaddr));
    listen(sockfd, 5);
    printf("Waiting for connections...\n");
    while (1) {
        new_fd = accept(sockfd, (struct sockaddr *) &client_addr, &sin_size);
        if (!fork()) {
            send(new_fd, "Hello there!\n", 15, 0);
            close(new_fd);
            exit(0);
        }
    }
    return 0;
}
