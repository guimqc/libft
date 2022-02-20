#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
		if (((char *)dst)[i] && ((char *)src)[i])
			((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
