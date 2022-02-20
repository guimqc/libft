#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
