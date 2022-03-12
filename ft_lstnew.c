#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node = ft_calloc(1, sizeof(node));
	node->content = content;
	node->next = NULL;

	return (node);
}