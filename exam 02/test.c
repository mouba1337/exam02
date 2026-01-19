#include <stdio.h>

int main()
{
    char *av[5] = {"ac", "ed", "rw", "ty", "po"};
    char **v = av;

    v += 2;
    // *v += 1;
    printf("%s", *v);
}