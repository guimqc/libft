#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = ft_itoa(n);
	write(fd, s, ft_strlen(s));
}
