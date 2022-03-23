#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	(void) lst;
	(void) f;
	(void) del;

	return (lst);
}

int main()
{
	t_list *a = ft_lstnew("salve");
	t_list *b = ft_lstnew("hello");
	t_list *c = ft_lstnew("bonjour");
	t_list *d = ft_lstnew("hola");
	t_list *e = ft_lstnew((int *)97);

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
