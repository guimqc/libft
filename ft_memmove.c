/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*temp;

	if (!dst && !src)
		return (NULL);
	temp = ft_calloc(len, sizeof(char));
	if (!temp)
		return (NULL);
	i = -1;
	while (++i < len)
		((char *)temp)[i] = ((char *)src)[i];
	i = -1;
	while (++i < len)
		((char *)dst)[i] = ((char *)temp)[i];
	free(temp);
	return (dst);
}
