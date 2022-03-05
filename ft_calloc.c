#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *p;

	p = malloc(size * count);
	ft_bzero(p, count);
	return (p);
}
