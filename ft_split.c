#include "libft.h"
#include <stdio.h>

/*
ft_split
- make a function that takes a char (*str) and char (c) in params.
- goal : return an (**arr) of (*str) splitted by (c) in the initial (*str)

1. find number of strings to allocate to the (**arr) of (*str)
2.

*/

static int split_count(const char *s, char c)
{
	size_t i;
	int split_count;

	if (*s == 0)
		return (0);
	split_count = 1;
	i = 1;
	while (i < ft_strlen((char *)s) - 1)
		if (s[i++] == c)
			split_count++;
	return (split_count);
}

char **ft_split(const char *s, char c)
{
	//size_t i;
	char **array;

	array = malloc(sizeof(char *) * split_count(s, c));

	return (array);
}

int main()
{
	const char *s = ",hello,bonjour,hola,salve,";
	printf("%d\n", split_count(s, ',')); // = 4
}

