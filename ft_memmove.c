#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *temp[len];
	i = -1;
	while (++i < len)
		((char *)temp)[i] = ((char *)src)[i];
	i = -1;
	while (++i < len)
		((char *)dst)[i] = ((char *)temp)[i];
	return (dst);
}
