#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 8192 // You can change this size for different runs

int main() {
    int fd = open("test.exe", O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(1);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;
    
    while ((bytesRead = read(fd, buffer, BUFFER_SIZE)) > 0) {
        // No printing, just reading to avoid skewing the time
    }

    if (bytesRead < 0) {
        perror("read");
    }

    close(fd);
    return 0;
}
