

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    if (!s1 || !s2)
        return (NULL);
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
}