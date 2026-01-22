


typedef struct    s_list
{
    struct s_list *next;
    void    *data;
}       t_list;

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *cur;

    if (begin_list == NULL || *begin_list == NULL)
        return;

    while (*begin_list)
    {
        if (cmp((*begin_list)->data, data_ref) == 0)
        {
            cur = *begin_list;
            *begin_list = cur->next;
            free(cur);
        }
        else
        {
            begin_list = &((*begin_list)->next);
        }
    }
}



