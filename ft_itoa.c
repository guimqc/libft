#include "libft.h"
#include <stdio.h>

static int  find_len(int n)
{
	int i;

	i = 0;
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

	s = malloc (sizeof(char) * find_len(n));
	i = find_len(n) - 1;
	while (i >= 0)
	{
		s[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (s);
}

int main()
{
	int x = 1;
	printf("%s\n", ft_itoa(x));
}
