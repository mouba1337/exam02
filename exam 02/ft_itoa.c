
#include <stdlib.h>

int     countlen(long n)
{
    int count;

    count = 0;
    if (n == 0)
        return(1);
    if (n < 0)
    {
        count++;
        n = -n;
    }
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return (count);
}

char	*ft_itoa(int nbr)
{
    long n;
    int     len;
    char    *s;

    n = nbr;
    len = countlen(n);
    s = malloc(len + 1);
    if (!s)
        return(NULL);
    s[len] = '\0';
    if (n == 0)
    {
        s[0] = '0';
        return(s);
    }
    if (n < 0)
    {
        s[0] = '-';
        n = -n;
    }
    len--;
    while (n > 0)
    {
        s[len] = (n % 10) + '0';
        len--;
        n = n / 10;
    }
    return (s);
}
