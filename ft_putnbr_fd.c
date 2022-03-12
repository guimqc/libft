#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	size_t i;
	char *s;

	s = ft_itoa(n);
	i = -1;
	while (++i < ft_strlen(s))
		write(fd , &s[i], 1);
	free(s);
}
