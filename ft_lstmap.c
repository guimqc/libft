#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *arr;
    int i;

    arr = ft_calloc(ft_lstsize(lst), sizeof(t_list));
    i = 0;
    while (lst)
    {
        arr[i++] = *ft_lstnew(f(lst->content));
        ft_lstdelone(lst, del);
        lst = lst->next;
    }
    return (arr);
}
