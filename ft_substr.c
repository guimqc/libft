#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	str = ft_calloc(len + 1, sizeof(char));
	if (start >= ft_strlen((char *)s))
		return (str);
	i = -1;
	while (++i < len && s[i])
		str[i] = s[start + i];
	return (str);
}
