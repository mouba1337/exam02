


typedef struct s_point
{
    int     x;
    int     y;
}       t_point;


void    fill(char **tab, t_point size, int x, int y, char to_replace)
{
    if (y < 0 || y >= size.y || x < 0 || x >= size.x)
        return;
    if (tab[y][x] != to_replace)
        return;
    tab[y][x] = 'F';
    fill(tab, size, x - 1, y, to_replace);
    fill(tab, size, x + 1, y, to_replace);
    fill(tab, size, x, y - 1, to_replace);
    fill(tab, size, x, y + 1, to_replace);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char    target;

    target = tab[begin.y][begin.x];
    if (target == 'F')
        return;
    fill (tab, size, begin.x, begin.y, target);
}
