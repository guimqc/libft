#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	while (len-- > 0)
		((unsigned char *)str)[len] = (unsigned char)c;
	return	(str);
}
