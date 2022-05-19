/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:51:52 by gvial             #+#    #+#             */
/*   Updated: 2022/04/09 18:51:54 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_p(unsigned long n)
{
	int		len;
	char	*adress;
	char	*prefix;
	char	*hexa;

	hexa = ft_ultox(n, 0);
	prefix = "0x";
	adress = ft_strjoin(prefix, hexa);
	len = ft_strlen(adress);
	write(1, adress, len);
	free (hexa);
	free (adress);
	return (len);
}
