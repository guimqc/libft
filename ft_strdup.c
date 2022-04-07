/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	strsize;

	strsize = ft_strlen((char *)s1) + 1;
	str = ft_calloc(strsize, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, strsize);
	return (str);
}
