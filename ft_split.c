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
	char	*ptr;
	char	**arr;
	size_t	i;
	size_t	ii;
	size_t	count;

	arr = malloc(sizeof(char *) * split_count((char *)s, c));
	i = -1;
	ii = 0;
	count = 0;
	while ((++i < ft_strlen((char *)s)) && (ii < split_count((char *)s, c)))
	{
		if (((char *)s)[i] != c)
			count++;
		if (((char *)s)[i] != c && (((char *)s)[i + 1] == c || i == ft_strlen((char *)s) - 1))
		{
			ptr = malloc(sizeof(char) * (count + 1));
			ptr = ft_substr(s, i - count + 1, count);
			arr[ii] = malloc(sizeof(char) * (count + 1));
			ft_strlcpy(arr[ii++], ptr, count + 1);
			count = 0;
			free(ptr);
		}
	}
	return (arr);
}

// int main()
// {
// 	const char *s = ",,hello,,,bonjour,,,hola,,,,,salve,,";
// 	char c = ',';
// 	char **arr = ft_split(s, c);

// 	size_t i;
// 	i = -1;
// 	while (++i < split_count((char *)s, c))
// 		printf("%s\n", arr[i]);
// }
// make split to test