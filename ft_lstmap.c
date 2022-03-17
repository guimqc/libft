#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *arr;

    arr = ft_lstnew(f(lst->content));
    while (lst)
    {
        
    }
    return (arr);
}
