#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dlen;
	size_t offset;

	i = 0;
	dlen = ft_strlen(dst);
	offset = dlen;
	if (dstsize <= 0)
		return (ft_strlen((char*)src));
	if (dlen > dstsize)
		return (dstsize + ft_strlen((char *)src));
	while (src[i] && offset < dstsize - 1)
		dst[offset++] = src[i++];
	dst[offset] = '\0';
	while (src[i])
		i++;
	return (dlen + i);
}
