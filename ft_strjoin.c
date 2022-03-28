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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		strsize;
	size_t	i;

	strsize = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	str = malloc(sizeof(char) * strsize);
	i = -1;
	while (++i < ft_strlen((char *)s1))
		str[i] = s1[i];
	i = -1;
	while (++i < ft_strlen((char *)s2))
		str[i + ft_strlen((char *)s1)] = s2[i];
	return (str);
}
