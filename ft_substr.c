#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	str = malloc(sizeof(char) * len);
	i = -1;
	while (++i < len)
		str[i] = s[start + i];
	return (str);
}
