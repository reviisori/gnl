/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:43:17 by altikka           #+#    #+#             */
/*   Updated: 2022/01/03 17:36:47 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	ft_buffer_to_line(char **line, char *buf)
{
	char	*join;

	join = ft_strjoin(*line, buf);
	free(*line);
	*line = join;
}

static int	ft_read_buffer(int const fd, char **line, char **arr, char *temp)
{
	char	buf[BUFF_SIZE + 1];

	ft_bzero(buf, BUFF_SIZE + 1);
	while (read(fd, buf, BUFF_SIZE) > 0)
	{
		temp = ft_strchr(buf, '\n');
		if (temp != NULL)
		{
			temp[0] = '\0';
			ft_buffer_to_line(line, buf);
			temp++;
			arr[fd] = ft_strdup(temp);
			return (1);
		}
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			ft_buffer_to_line(line, buf);
		free(temp);
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	if (*line == NULL || *line[0] == '\0')
		return (0);
	return (1);
}

static int	ft_scan_array(int const fd, char **line, char **arr)
{
	char	*temp;
	char	*next;

	temp = NULL;
	if (arr[fd] == NULL)
		return (ft_read_buffer(fd, line, arr, temp));
	temp = ft_strchr(arr[fd], '\n');
	if (temp == NULL)
	{
		*line = ft_strdup(arr[fd]);
		arr[fd][0] = 0;
		free(arr[fd]);
		arr[fd] = NULL;
		return (ft_read_buffer(fd, line, arr, temp));
	}
	*line = ft_strndup(arr[fd], (size_t)(temp - arr[fd]));
	temp++;
	next = ft_strdup(temp);
	free(arr[fd]);
	arr[fd] = next;
	return (1);
}

int	get_next_line(int const fd, char **line)
{
	static char	*arr[FD_SIZE];

	if (read(fd, arr[0], 0) < 0)
		return (-1);
	if (fd < 0 || fd >= FD_SIZE || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	*line = NULL;
	return (ft_scan_array(fd, line, arr));
}
