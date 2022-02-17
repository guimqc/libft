#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>

size_t  ft_strlen(char *str);
void    ft_putstr(char *str);
void    ft_putchar(char c);
int     ft_atoi(char *str);
int     ft_isascii(char c);
int     ft_isprint(char c);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int     ft_toupper(int c);
int	    ft_isalnum(int c);
int     ft_tolower(int c);

#endif