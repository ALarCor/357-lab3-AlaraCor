#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1

int main() {
    char line[MAX_LINE_LENGTH];

    while (fgets(line, sizeof(line), stdin)) {
        char *word = strtok(line, " \t\n");
        while (word != NULL) {
            printf("%s\n", word);
            word = strtok(NULL, " \t\n");
        }
    }

    return 0;
}
