/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:54:19 by gvial             #+#    #+#             */
/*   Updated: 2022/05/16 13:54:21 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	read_file(char **result, int *byte_count, int fd)
{
	char	*buff;

	*byte_count = 1;
	buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	while (!ft_strchr(*result, '\n'))
	{
		*byte_count = read(fd, buff, BUFFER_SIZE);
		if (*byte_count == 0 || *byte_count == -1)
			break ;
		buff[*byte_count] = '\0';
		*result = ft_strjoin(*result, buff);
	}
	if (buff)
		free(buff);
}

static void	get_line(char *result, char **line)
{
	int	len;

	len = 0;
	while (result[len] != '\n' && result[len] != '\0')
		len++;
	*line = ft_substr(result, 0, len + 1, 0);
}

static void	trim_result(char **result)
{
	int	len;

	len = 0;
	while (result[0][len] != '\n' && result[0][len] != '\0')
		len++;
	if ((int)ft_strlen(*result) == len + 1 || (int)ft_strlen(*result) == len)
	{
		if (*result)
			free(*result);
		*result = NULL;
	}
	else
		*result = ft_substr(*result, len + 1, ft_strlen(*result) - len, 1);
}

char	*get_next_line(int fd)
{
	static char	*result[OPEN_MAX];
	int			byte_count;
	char		*line;

	line = NULL;
	read_file(&result[fd], &byte_count, fd);
	if (result[fd])
		get_line(result[fd], &line);
	if (result[fd])
		trim_result(&result[fd]);
	if (byte_count == 0 && ft_strlen(result[fd]) == 0)
	{
		free(result[fd]);
		result[fd] = NULL;
	}
	return (line);
}
