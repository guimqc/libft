/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:54:34 by gvial             #+#    #+#             */
/*   Updated: 2022/05/16 13:54:36 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_calloc_gnl(size_t count, size_t size)
{
	void	*p;
	int		n;

	n = (count * size);
	p = malloc(n);
	if (p)
		while (n > 0)
			((char *)p)[--n] = 0;
	return (p);
}

int	ft_strchr_gnl(const char *s, int c)
{
	int	i;
	int	dstsize;

	if (!s)
		return (0);
	dstsize = ft_strlen_gnl((char *)s) + 1;
	i = -1;
	while (++i < dstsize)
		if ((*s++ == (char)c))
			return (1);
	return (0);
}

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen_gnl((char *)s1);
	s2_len = ft_strlen_gnl((char *)s2);
	str = ft_calloc_gnl(s1_len + s2_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		str[i] = s1[i];
	i = -1;
	while (++i < s2_len)
		str[i + s1_len] = s2[i];
	str[i + s1_len] = '\0';
	if (s1)
		free((void *)s1);
	return (str);
}

char	*ft_substr_gnl(char const *s, int start, size_t len, int free_s)
{
	char	*str;
	size_t	i;

	if (len > ft_strlen_gnl((char *)s))
		len = ft_strlen_gnl((char *)s);
	str = ft_calloc_gnl(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (start >= (int)ft_strlen_gnl((char *)s))
		return (str);
	i = -1;
	while (++i < len && s[i])
		str[i] = s[start + i];
	if (free_s == 1 && s)
		free((void *)s);
	return (str);
}
