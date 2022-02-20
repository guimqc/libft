#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
		((unsigned char *)str)[i] = (unsigned char)c;
	return	(str);
}
