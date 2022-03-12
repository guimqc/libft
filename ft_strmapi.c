#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	size_t i;

	str = ft_calloc(ft_strlen((char *)s), sizeof(char));
	i = -1;
	while (++i < ft_strlen((char *)s))
		str[i] = f(i, s[i]);
	return (str);
}
