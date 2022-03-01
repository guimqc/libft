#include "libft.h"
#include <stdio.h>

static size_t split_count(const char *s, char c)
{
	size_t i;
	size_t split_count;

	if (*s == 0)
		return (0);
	split_count = 1;
	i = 1;
	while (i < ft_strlen((char *)s) - 1)
		if (s[i++] == c)
			split_count++;
	return (split_count);
}

static int *split_len(const char *s, char c)
{
	size_t i;
	size_t ii;
	int *split_len_arr;

	i = 0;
	ii = 0;
	split_len_arr = malloc(sizeof(int) * split_count(s, c));
	while (i < ft_strlen((char *)s) && ii < split_count(s, c))
	{
		if (((char *)s)[i] == c)
		{
			
		}
		i++;
	}
	return (split_len_arr);
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

	printf("split count : %zu\n", split_count(s, ','));

	int *split_len_arr = split_len(s, ',');
	printf("split_len_arr[0] = %d\n", split_len_arr[0]);
}
