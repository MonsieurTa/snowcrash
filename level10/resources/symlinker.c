#include <stdio.h>
#include <unistd.h>

int main(int ac, char *av[]) {
        unlink(av[1]);
        symlink("./token", av[1]);
}
