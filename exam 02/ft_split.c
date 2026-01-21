

int     checksepa(char c)
{
    return(c == ' ' || c == '\t' || c == '\n');
}

int     count(char *s)
{
    int     i;
    int     count;

    i = 0;
    while (s)
    {
        while (s[i] &&checksepa(s[i]))
            i++;
        if (s[i] && !checksepa(s[i]))
        {
            count++;
            while (s[i] &&checksepa(s[i]))
                i++;
        }
    }
    return (count);
}

char    *malocword(char *str)
{
    char    *s;
    int     len;
    
    len = 0;
    while (str[len] && !checksepa(str[len]))
        str++;
    s = malloc(len + 1);
    if (!s)
        return (NULL);
    
    
    
}

char    **ft_split(char *str)
{
    int     c;

    c = count(str);
    while (str && checksepa(str))
        str++;
    
    

    
}