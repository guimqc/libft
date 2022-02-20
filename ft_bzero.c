#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t  i;
	char *converted_str;

	converted_str = (char *)s;
	i = -1;
	while (++i < n)
		converted_str[i] = 0;
}
