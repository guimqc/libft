/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static size_t	split_count(char *s, char c)
{
	size_t	i;
	size_t	split_count;

	if (*s == 0)
		return (0);
	split_count = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if ((i != 0 && s[i] == c && s[i - 1] != c)
			|| (i == ft_strlen(s) - 1 && s[i] != c))
			split_count++;
		i++;
	}
	return (split_count);
}

static char	**alloc_arr(char *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	ii;
	size_t	count;

	i = -1;
	ii = 0;
	count = 0;
	arr = ft_calloc(split_count(s, c) + 1, sizeof(char *));
	while (++i < ft_strlen(s))
	{
		if (s[i] != c)
			count++;
		if ((i != 0 && s[i] == c && s[i - 1] != c)
			|| (i == ft_strlen(s) - 1 && s[i] != c))
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
	size_t	i;
	size_t	ii;
	size_t	count;

	arr = alloc_arr((char *)s, c);
	if (split_count((char *)s, c) == 0)
	{
		*arr = 0;
		return (arr);
	}
	i = -1;
	ii = 0;
	count = 0;
	while (++i < ft_strlen((char *)s))
	{
		if (s[i] != c)
			arr[ii][count++] = s[i];
		if (i != 0 && s[i] == c && s[i - 1] != c
			&& ii < split_count((char *)s, c) - 1)
		{
			arr[ii++][count] = '\0';
			count = 0;
		}
	}
	arr[++ii] = 0;
	return (arr);
}

1. count # of words to use later
2. count # of chars per word to use later
3. alloc the **arr : # of words first (char *), then # of char per word (char)
4. fill the array, NULL terminating each string and NULL terminating the **arr too at the end

5. if their is no words too alloc return the **arr with a NULL or 0

   [0]      [1]      [2]         [3] = NULL

["hello"] ["hola"] ["salve"]