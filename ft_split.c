#include "libft.h"
#include <stdio.h>

static size_t	split_count(char *s, char c)
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

static char	**alloc_arr(char *s, char c)
{
	char **arr;
	size_t i;
	size_t ii;
	size_t count;

	arr = ft_calloc(split_count(s, c) + 1, sizeof(char *));
	i = -1;
	ii = 0;
	count = 0;
	while (++i < ft_strlen(s))
	{
		if (s[i] != c)
			count++;
		if ((s[i] == c && s[i - 1] != c && i != 0) || (i == ft_strlen(s) - 1 && s[i] != c))
		{
			arr[ii++] = ft_calloc(count + 1, sizeof(char));
			count = 0;
		}
	}
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t i;
	size_t ii;
	size_t count;

	arr = alloc_arr((char *)s, c);
	i = -1;
	ii = 0;
	count = 0;
	while (++i < ft_strlen((char *)s))
	{
		if (s[i] != c)
			arr[ii][count++] = s[i];
		if (s[i] == c && s[i - 1] != c && i != 0)
		{
			arr[ii++][count] = '\0';
			count = 0;
		}
	}
	arr[++ii] = 0;
	// printf("%zu\n", ii);
	return (arr);
}

// int main()
// {
// 	const char *s = "hello,,,bonjour,,,hola,,,,,salve";
// 	char c = ',';
// 	char **arr = ft_split(s, c);

// 	size_t i;
// 	i = -1;
// 	while (++i < split_count((char *)s, c))
// 		printf("%s\n", arr[i]);
// }
// make split to test