

#include <unistd.h>


int    atoii(char  *s)
{
    int     i;
    int    n;

    n = 0;
    i = 0;
    while (s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        n = (n * 10) + (s[i] - '0');
        i++;
    }
    return (n);
}


int     isprime(int n)
{
    int     i;

    if (n <= 1)
        return (0);
    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void    putnbr(int n)
{
    char    c;

    if (n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write (1, &c, 1);
}


int main(int ac, char **av)
{
    int     nbr;
    int     count;


    if (ac != 2 || av[1][0] == '-')
    {
        write (1, "0\n", 2);
        return (0);
    }
    nbr = atoii(av[1]);
    count = 0;
    while (nbr > 0)
    {    
        if (isprime(nbr))
            count += nbr;
        nbr--;
    }
    putnbr(count);
    write (1, "\n", 1);
}