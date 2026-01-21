

#include <unistd.h>

void    to_hexa(int n)
{
    char    *base = "0123456789abcdef";

    if (n >= 16)
        to_hexa(n / 16);
    write (1, &base[n % 16], 1);
}


int main(int ac, char **av)
{
    int     i;
    int    n;

    i = 0;
    if (ac == 2)
    {
        n = 0;
        while (av[1][i])
        {
            n = n * 10 + (av[1][i] - 48);
            i++;
        }
        to_hexa(n);
    }
    write (1, "\n", 1);
}