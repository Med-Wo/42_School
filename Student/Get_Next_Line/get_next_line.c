/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravily <mravily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:59:01 by mravily           #+#    #+#             */
/*   Updated: 2019/11/24 16:09:41 by mravily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		check_backslash_n(char *buf, char *rest)
{
	size_t			i;
	size_t			len_rest;

	i = 0;
	len_rest = 0;
	if (rest[0] == '\n')
		return (len_rest);
	while (rest[len_rest] != '\n' && rest[len_rest])
		len_rest++;
	while (buf[i] || rest[len_rest] == '\n')
	{
		if (buf[i] == '\n' || rest[len_rest] == '\n')
			return (len_rest);
		i++;
	}
	return (-1);
}

static int		cpy_lastline(int ret, char *buf, char *rest, char **line)
{
	char	*tmp;
	int		i;

	i = check_backslash_n(buf, rest);
	if (ret == 0 && i != -1)
	{
		rest[i] = '\0';
		*line = ft_strdup(rest);
		tmp = ft_strdup(rest + (i + 1));
		free(rest);
		rest = tmp;
		free(rest);
		return (1);
	}
	else
	{
		*line = ft_strdup(rest);
		free(rest);
		rest = NULL;
		return (0);
	}
}

static int		read_file(int fd, char **line)
{
	char			buf[BUFFER_SIZE + 1];
	static char		*rest = NULL;
	int				i;
	int				ret;
	char			*tmp;

	while ((ret = read(fd, buf, BUFFER_SIZE)) > 0 || i != -1)
	{
		buf[ret] = '\0';
		rest = ft_strjoin(rest, buf);
		i = check_backslash_n(buf, rest);
		if (i >= 0)
		{
			rest[i] = '\0';
			*line = ft_strdup(rest);
			tmp = ft_strdup(rest + (i + 1));
			free(rest);
			rest = tmp;
			return (1);
		}
	}
	if (ret == 0 && i != -1)
		if (cpy_lastline(ret, buf, rest, line) == 1)
			return (1);
	return (0);
}

int				get_next_line(int fd, char **line)
{
	static char		*rest = NULL;
	if (fd < 0 || !line)
		return (-1);
	if (read_file(fd, line) == 1)
		return (1);
	return (0);
}
