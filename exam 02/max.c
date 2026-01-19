

int     max(int *tab, unsigned int len)
{
    unsigned int i;
    int     max;

    if (len == 0)
        return (0);
    i = 0;
    max = tab[i];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;   
    }
    return (max);
}

#include <stdio.h>

int     main()
{
    int     s[]  = {1, 7, 55, 4 ,5 , 5, 33 , 99};

    printf("%d", max(s, 7));
}