/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:51:25 by gvial             #+#    #+#             */
/*   Updated: 2022/04/09 18:51:27 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_x(unsigned int n, int caps)
{
	char	*s;
	int		len;

	if (n < 0)
		n = (n * -1) + 1;
	s = ft_ltox(n, caps);
	len = ft_strlen(s);
	write(1, s, len);
	free (s);
	return (len);
}
