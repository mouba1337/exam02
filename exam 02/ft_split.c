

#include <stdlib.h>

int     checksepa(char c)
{
    return(c == ' ' || c == '\t' || c == '\n');
}

int count(char *s)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    while (s[i])
    {
         while (s[i] && checksepa(s[i]))
            i++;
        if (s[i])
            count++;
        while (s[i] && !checksepa(s[i]))
            i++;
    }
    return (count);
}

char    *malocword(char *str)
{
    char    *s;
    int len;
    int i;

    len = 0;
    while (str[len] && !checksepa(str[len]))
        len++;
    s = malloc(len + 1);
    if (!s)
        return (NULL);
    i = 0;
    while (i < len)
    {
        s[i] = str[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}

char    **ft_split(char *str)
{
    int     i;
    int     c;
    char    **resu;
    int     j;

    c = count(str);
    resu = malloc(sizeof(char *) * (c + 1));

    if (!resu)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i])
    {
        while (str[i] && checksepa(str[i]))
            i++;
        if (str[i] && !checksepa(str[i]))
        {
            resu[j] = malocword(&str[i]);
            j++;
        }
        while (str[i] && !checksepa(str[i]))
             i++;
    }
    resu[j] = NULL;
    return (resu);
}