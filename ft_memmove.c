#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *converted_src = (char *) src;
	char *converted_dst = (char *) dst;

	i = -1;
	while (++i < len)
		if (converted_dst[i] && converted_src[i])
			converted_dst[i] = converted_src[i];
	return (dst);
}
