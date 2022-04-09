/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:22:56 by gvial             #+#    #+#             */
/*   Updated: 2022/03/28 10:23:34 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	find_len(long n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_ltoa(long n)
{
	char	*s;
	int		i;
	int		neg;

	neg = 0;
	i = find_len(n);
	s = ft_calloc(find_len(n) + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	s[i] = '\0';
	while (--i >= 0)
	{
		s[i] = n % 10 + 48;
		n /= 10;
		if (i == 0 && neg == 1)
			s[i] = '-';
	}
	return (s);
}
