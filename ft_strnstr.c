/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_valid(char *haystack, char *needle, size_t i, size_t len)
{
	int	j;

	j = 0;
	while (haystack[i] && needle[j])
		if (haystack[i++] != needle[j++] || i > len)
			return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen((char *)needle);
	if (needle_len > ft_strlen((char *)haystack))
		return (NULL);
	if (needle_len == 0)
		return ((char *)haystack);
	i = -1;
	while (++i < len && ((char *)haystack)[i])
		if (((char *)haystack)[i] == ((char *)needle)[0])
			if (is_valid((char *)haystack, (char *)needle, i, len) == 1)
				return (&((char *)haystack)[i]);
	return (NULL);
}
