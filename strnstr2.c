#include "libft.h"

static int	is_valid(char *haystack, char *needle, size_t i, size_t len)
{
	int	ii;

	ii = 0;
	while (haystack[i] && needle[ii])
		if (haystack[i++] != needle[ii++] || i > len)
			return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	i = -1;
	while (++i < len && ((char *)haystack)[i])
		if (((char *)haystack)[i] == ((char *)needle)[0])
			if (is_valid((char *)haystack, (char *)needle, i, len) == 1)
				return (&((char *)haystack)[i]);
	return (NULL);
}

