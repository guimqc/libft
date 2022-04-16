/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:50:57 by gvial             #+#    #+#             */
/*   Updated: 2022/04/09 18:50:59 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_nbr(int n)
{
	int		len;
	char	*nbr;

	nbr = ft_ltoa(n);
	len = ft_strlen(nbr);
	write(1, nbr, len);
	free (nbr);
	return (len);
}
