#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int num;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	num = (n % 10);
	n = n / 10;
	if (n > 0)
		ft_putnbr_fd(n, fd);	
	ft_putchar_fd(num + 48, fd);
}
