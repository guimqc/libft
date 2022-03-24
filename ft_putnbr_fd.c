#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char num;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (n > 0)
	{
		num = (n % 10) + 48;
		write(fd, &num, 1);
		n /= 10;
	}
}

int main()
{
	int n = 1234;

	ft_putnbr_fd(n, 1);
}
