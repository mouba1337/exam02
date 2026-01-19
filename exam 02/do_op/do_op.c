

#include "do_op.h"

int     atoi(char   *s)
{
    int     sign;
    int     resu;

    sign = 1;
    resu = 0;
    while (*s == ' ' || *s == '\t')
        s++;
    if (*s == '-')
    {
        sign = -sign;
        s++;    
    }
    while (*s)
    {
        resu = resu * 10 + (*s - 48);
        s++;
    }
    return (resu * sign);
}
int main(int ac, char **av)
{
    int     one;
    int     two;
    int     s;

    if (ac == 4)
    {
        one = atoi(av[1]);
        two = atoi(av[3]);
        if (av[2][0] == '+')
        {
            s = one + two;
            printf("%d", s);
        }
        else if (av[2][0] == '-')
        {
            s = one - two;
            printf("%d", s);
        }
        else if (av[2][0] == '*')
        {
            s = one * two;
            printf("%d", s);
        }
        else if (av[2][0] == '/')
        {
            s = one / two;
            printf("%d", s);
        }
    }
    printf("\n");
}