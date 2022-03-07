#include "libft.h"

char    *ft_strdup(const char *s1)
{
	char *str;

	str = malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	ft_strlcpy(str, s1, (ft_strlen((char *)s1) + 1));
	return (str);
}
