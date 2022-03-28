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

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	minus;
	int	s1_len;

	s1_len = ft_strlen((char *)s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = s1_len - 1;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	minus = s1_len - j - 1;
	return (ft_substr(s1, i, s1_len - minus - i));
}

int main()
{
	char *str = ",,,,,,,,,";

	printf("%s\n ", ft_strtrim(str, ",")); // should return NULL
}
