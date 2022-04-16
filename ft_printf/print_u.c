/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:52:38 by gvial             #+#    #+#             */
/*   Updated: 2022/04/09 18:52:40 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_u(unsigned int n)
{
	char	*result;
	int		len;

	result = ft_ltoa(n);
	len = ft_strlen(result);
	write(1, result, len);
	free (result);
	return (len);
}
