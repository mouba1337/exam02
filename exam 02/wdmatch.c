

#include <unistd.h>

int main(int ac, char **av)
{
    int     run;
    int     fix;

    fix = 0;
    if (ac == 3)
    {
        while (av[1][fix] && av[2][run])
        {
            run = 0;
            if (av[1][fix] == av[2][run])
            {
                run++;
                fix++;
                if (av[1][fix] == '/0')
                {
                
                }
            }
            else
                run++; 
        }
    }
}