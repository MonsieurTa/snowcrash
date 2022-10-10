#include <file>
#include <stdio.h>
#include <stdlib.h>

int main() {
        FILE *fp = NULL;
        char *line = NULL;
        size_t len = 0;
        ssize_t read = 0;

        fp = fopen("./token", "r");
        if (fp == NULL) {
                exit(EXIT_FAILURE);
        }
        read = getline(&line, &len, fp);
        printf("read: %d\n%s\n", read, line);
        int i = 0;
        while (line[i] && line[i] != '\n') {
                line[i] -= i;
                i++;
        }
        printf("%s\n", line);
        return 0;
}
