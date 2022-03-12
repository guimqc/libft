#include "libft.h"

static int  find_len(int n)
{
	int i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char    *ft_itoa(int n)
{
	char *s;
	int i;
	int neg;

	neg = 0;
	i = find_len(n);
	s = ft_calloc(find_len(n) + 1, sizeof(char));
	if (n == -2147483648)
		return (ft_memcpy(s, "-2147483648", 11));
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	s[i] = '\0';
	while (--i >= 0)
	{
		s[i] = n % 10 + 48;
		n /= 10;
		if (i == 0 && neg == 1)
			s[i] = '-';
	}
	return (s);
}
