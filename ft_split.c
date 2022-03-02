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

	arr = malloc(sizeof(char *) * split_count((char *)s, c));

	return (arr);
}

int main()
{
	const char *s = ",hello,bonjour,hola,salve,";
	char **arr = ft_split(s, ',');
	printf("%s\n", arr[0]); //  = hello;
	printf("%s\n", arr[3]); //  = salve;
}
