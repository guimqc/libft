#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int dstsize;

	dstsize = ft_strlen((char *)s) + 1;
	while (dstsize > -1)
		if (s[dstsize--] == (char)c)
			return ((char *)s + ++dstsize);
	return (NULL);
}
