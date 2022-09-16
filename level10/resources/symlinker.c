#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char *av[]) {
        int i = 0;
        int max = atoi(av[2]);
        while (i < max) {
                i++;
        }
        printf("iter %d\n", max);

        unlink(av[1]);
        symlink("./token", av[1]);
}
