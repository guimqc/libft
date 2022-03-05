#include "libft.h"
#include <stdio.h>

static int  find_len(int n)
{
	int i;

	i = 0;
	if (n <= 0)
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

	s = malloc (sizeof(char) * find_len(n));

	return (s);
}

int main()
{
	int x = -1234;
	printf("%s\n", ft_itoa(x));
}
