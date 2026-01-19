


typedef struct    s_list
{
    struct s_list *next;
    void    *data;
}       t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *ff;

    if (!begin_list || !*begin_list)
        return;
    while (*begin_list && cmp(data_ref, (*begin_list)->data) == 0)
    {
        ff = *begin_list;
        *begin_list = (*begin_list)->next;
        free(ff);
    }
    ff = *begin_list;
    while (ff && ff->next)
    {
        if (cmp(data_ref, ff->next->data) == 0)
        {
            t_list  *temp;
            temp = ff->next;
            ff->next = temp->next;
            free(temp);
        }
        else
            ff = ff->next;
    }
}




