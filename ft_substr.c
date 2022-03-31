/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (str);
	i = -1;
	while (++i < len && s[i])
		str[i] = s[start + i];
	return (str);
}
