#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	size_t i;

	i = -1;
	while (++i < ft_strlen(s))
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}
