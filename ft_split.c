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

char	**ft_split(const char *s, char c)
{
	(void) s;
	(void) c;
}

// int main()
// {
// 	const char *s = ",,hello,,bonjour,,hola,,salve,,";
// 	char **arr = ft_split(s, ',');
// 	int i = -1;
// 	while (arr[++i])
// 	{
// 		printf("%s\n", arr[i]);
// 	}
// }