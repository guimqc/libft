#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	(void) del;
	t_list *new_head;
	t_list *new;

	new_head = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		ft_lstadd_back(&new_head, new);
		lst = lst->next;
	}
	return (new_head);
}
