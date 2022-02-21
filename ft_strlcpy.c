#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	if (dstsize <= 0)
		return (ft_strlen((char *)src));
	i = -1;
	while (++i < dstsize - 1 && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return ft_strlen((char *)src);
}
