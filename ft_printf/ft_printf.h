/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:21:21 by gvial             #+#    #+#             */
/*   Updated: 2022/06/01 14:21:24 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		print_c(char c);
int		print_s(char *s);
int		print_nbr(int n);
int		print_percent(void);
int		print_u(unsigned int n);
int		print_p(unsigned long n);
int		print_x(unsigned int n, int caps);
int		format_and_print(va_list arg_list, char format);

#endif