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
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!(*needle))
		return ((char *)haystack);
	while (len > 0)
	{
		if (haystack[len - 1] == needle[ft_strlen((char *)needle - 1)])
			printf("%c\n", haystack[len - 1]);
		len--;
	}
	return (NULL);
}

int main()
{
	const char *haystack = "this is a test";
	const char *needle = "test";

	printf("%s\n", ft_strnstr(haystack, needle, 15));
}
