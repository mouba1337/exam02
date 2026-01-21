

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    int     temp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>

int     main()
{
    int     i[] = {8, 4, 3, 4, 55, 7};
    int in;

    in = 0;
    sort_int_tab(i, 6);
    while (in < 6)
    {
        printf("%d-==", i[in]);
        in++;
    }
}
