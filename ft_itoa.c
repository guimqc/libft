#include "libft.h"
#include <stdio.h>

static int  find_len(int n)
{
	int i;

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

	if (n < 0)
		n *= -1;
	s = ft_calloc (find_len(n) + 1, sizeof(char));
	i = find_len(n);
	s[i] = '\0';
	while (--i >= 0)
	{
		s[i] = n % 10 + 48;
		n /= 10;
	}
	return (s);
}

int main()
{
	int x = 234;
	printf("alloc %i char\n", find_len(x));
	printf("%s\n", ft_itoa(x));
}
