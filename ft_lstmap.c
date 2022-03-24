#include "libft.h"
#include <stdio.h>

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

int main()
{
	t_list *a = ft_lstnew(ft_itoa(97));
	t_list *b = ft_lstnew(ft_itoa(102));
	t_list *c = ft_lstnew(ft_itoa(465));
	t_list *d = ft_lstnew(ft_itoa(6));
	t_list *e = ft_lstnew(ft_itoa(34));

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = NULL;

	t_list *curr = a;

	while (curr)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}
}
