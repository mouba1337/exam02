

#include <unistd.h>

int main(int ac, char **av)
{
    int     i;
    char    *base = "0123456789abcdef";
    unsigned int    div;
    unsigned int    n;

    i = 0;
    if (ac == 2)
    {
        n = 0;
        while (av[1][i])
        {
            n = n * 10 + (av[1][i] - 48);
            i++;
        }
        div = 1;
        while ((n / 16 ) >= div)
            div = div * 16;
        while (div > 0)
        {
            write (1, &base[(n / div) % 16], 1);
            div = div / 16;
        }
    }
    write (1, "\n", 1);
}