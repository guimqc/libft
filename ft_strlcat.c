#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dlen;

	dlen = ft_strlen(dst);
	if (dlen > dstsize)
		return (dstsize + ft_strlen((char *)src));
	if (dstsize <= 0)
		return (ft_strlen((char*)src));
	i = -1;
	while (++i < dlen - 1&& src[i])
		dst[dlen++] = src[i];
	dst[dlen] = '\0';
	while (src[i])
		i++;
	return (dlen + i);
}

int main()
{
	char dst[12] = "hello";
	char src[] = " world";
	printf("initial dst = %s\n", dst);
	printf("initial dst len = %zu\n", ft_strlen(dst));
	strlcat(dst, src, 12);
	printf("after strlcat dst = %s\n", dst);
	printf("after strlcat dst len = %zu\n", ft_strlen(dst));
}
