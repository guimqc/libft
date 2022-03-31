/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	dstsize;

	dstsize = ft_strlen((char *)s) + 1;
	i = -1;
	while (++i < dstsize)
		if ((*s++ == (char)c))
			return ((char *)--s);
	return (NULL);
}
