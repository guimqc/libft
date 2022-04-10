/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
	size_t	j;
	size_t	count;

	i = -1;
	j = 0;
	count = 0;
	arr = ft_calloc(split_count(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (++i < ft_strlen(s))
	{
		if (s[i] != c)
			count++;
		if ((i != 0 && s[i] == c && s[i - 1] != c)
			|| (i == ft_strlen(s) - 1 && s[i] != c))
		{
			arr[j++] = ft_calloc(count + 1, sizeof(char));
			if (!arr[j - 1])
				return (NULL);
			count = 0;
		}
	}
	return (arr);
}

char	**fill_arr(char **arr, char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = -1;
	j = 0;
	count = 0;
	while (++i < ft_strlen((char *)s))
	{
		if (s[i] != c)
			arr[j][count++] = s[i];
		if (i != 0 && s[i] == c && s[i - 1] != c
			&& j < split_count((char *)s, c) - 1)
		{
			arr[j++][count] = '\0';
			count = 0;
		}
	}
	arr[++j] = 0;
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;

	arr = alloc_arr((char *)s, c);
	if (split_count((char *)s, c) == 0)
	{
		*arr = 0;
		return (arr);
	}
	if (!arr)
		return (NULL);
	return (fill_arr(arr, (char *)s, c));
}
