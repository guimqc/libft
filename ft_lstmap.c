#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *arr;
	(void) del;

	arr = ft_lstnew(f(lst->content));
	while (lst)
	{
		
	}
	return (arr);
}

int main()
{
	t_list *init = ft_lstnew((int *)234);
	printf("%p\n", init->content); // = 0xea = 234
}
