#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int i;
	if (lst == NULL)
		return (0);
	i = 0;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i + 1);
}
