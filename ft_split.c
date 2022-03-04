#include "libft.h"
#include <stdio.h>

static size_t split_count(char *s, char c)
{
	size_t i;
	size_t split_count;

	if (*s == 0)
		return (0);
	split_count = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if ((s[i] == c && s[i - 1] != c && i != 0) 
			|| (i == ft_strlen(s) - 1 && s[i] != c))
			split_count++;
		i++;
	}
	return (split_count);
}

char **ft_split(const char *s, char c)
{
	char **arr;

	arr = malloc(sizeof(char) * split_count((char *)s, c));

	return (arr);
}

int main()
{
	const char *s = ",,hello,,,,bonjour,,,hola,salve,,";
	char c = ',';
	char **arr = ft_split(s, c);

	printf("split count = %zu\n", split_count((char *)s, c));
	printf("strlen = %zu\n", ft_strlen((char *)s));
	size_t i;
	i = -1;
	while (++i < split_count((char *)s, c))
		printf("%s\n", arr[i]);
}
