#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024 // You can change this size for different runs

int main() {
    FILE *file = fopen("test.exe", "rb");
    if (file == NULL) {
        perror("fopen");
        exit(1);
    }

    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, file)) > 0) {
        // No printing, just reading to avoid skewing the time
    }

    if (ferror(file)) {
        perror("fread");
    }

    fclose(file);
    return 0;
}
