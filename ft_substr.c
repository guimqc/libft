#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	
	str = malloc(sizeof(char) * len + 1);
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	if (start >= ft_strlen((char *)s))
		return (str);
	i = -1;
	while (++i < len && s[i])
		str[i] = s[start + i];
	return (str);
}
