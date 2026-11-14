#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {

    int fd;
    char message[100];

    fd = open("myfifo", O_RDONLY);
    
    if (fd == -1) {
        perror("open");
        return EXIT_FAILURE;
    }

    read(fd, message, sizeof(message));

    printf("Received Message: %s\n", message);

    close(fd);

    return EXIT_SUCCESS;
}