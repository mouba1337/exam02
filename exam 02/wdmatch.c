

#include <unistd.h>

int main(int ac, char **av)
{
    int     run;
    int     fix;
    int     i;

    fix = 0;
    run = 0;
    if (ac == 3)
    {
        while (av[1][fix] && av[2][run])
        {
            if (av[1][fix] == av[2][run])
                fix++;
            run++;
        } 
        if (av[1][fix] == '\0')
        {
            i = 0;
            while (av[1][i])
            {
                write (1, &av[1][i], 1);
                i++;
            }
        }
    }
    write (1, "\n", 1);
}