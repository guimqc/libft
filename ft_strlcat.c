#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t ii;

	ii = ft_strlen(dst);
	if (ii > dstsize)
		return (dstsize + ft_strlen((char *)src));
	if (dstsize <= 0)
		return (ft_strlen((char*)src));
	i = -1;
	while (++i < ii && src[i])
		dst[ii++] = src[i];
	dst[ii] = '\0';
	while (src[i])
		i++;
	return (ii + i);
}
