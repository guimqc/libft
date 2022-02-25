#include "libft.h"

char    *ft_strdup(const char *s1)
{
	size_t dstsize;
	char *str;

	dstsize = ft_strlen((char *)s1) + 1;
	str = malloc(sizeof(char) * dstsize);
	ft_strlcpy(str, s1, dstsize);
	return (str);
}
