#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list curr;

    curr = *lst;
    while (curr.next != NULL)
        curr = *curr.next;
    return (curr);
}
