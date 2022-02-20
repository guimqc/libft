#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t i;
	unsigned char *edited_str;

	edited_str = (unsigned char *)str;
	i = -1;
	while (++i < len)
		edited_str[i] = (unsigned char)c;
	return	(edited_str);
}
