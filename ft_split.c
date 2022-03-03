#include "libft.h"
#include <stdio.h>

static size_t split_count(char *s, char c)
{
	size_t i;
	size_t split_count;

	if (*s == 0)
		return (0);
	split_count = 1;
	i = 1;
	while (i < ft_strlen(s) - 1)
		if (s[i++] == c)
			split_count++;
	return (split_count);
}

char **ft_split(const char *s, char c)
{
	char **arr;
	size_t i;
	size_t ii;
	size_t count;

	arr = malloc(sizeof(char) * split_count((char *)s, c));
	i = 0;
	ii = 0;
	count = 0;
	while (i < split_count((char *)s, c) && ii < ft_strlen((char *)s) + 1)
	{
		if (((char *)s)[ii] != c)
			count++;
		if ((((char *)s)[ii] == c && ii != 0) || ii == ft_strlen((char *)s))
		{
			arr[i] = malloc(sizeof(char) * (count + 1));
			if (ii == ft_strlen((char *)s))
				arr[i] = ft_substr(s, ii - count + 1, count);
			else
			arr[i] = ft_substr(s, ii - count, count);
			count  = 0;
			printf("i = %zu\n", i);
			i++;
		}
		ii++;
	}
	return (arr);
}

int main()
{
	const char *s = ",hello,bonjour,hola,salve";
	char c = ',';
	char **arr = ft_split(s, c);
	size_t i;

	i = -1;
	while (++i < split_count((char *)s, c))
		printf("%s\n", arr[i]);
}
