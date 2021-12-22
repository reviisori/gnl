/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:43:17 by altikka           #+#    #+#             */
/*   Updated: 2021/12/22 18:18:26 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_buffer(int const fd, char **line, arr[FD_SIZE], char *temp)
{
	char	buf[BUFF_SIZE + 1];


}

static int	ft_scan_array(int const fd, char **line, char *arr[FD_SIZE])
{
	char	*temp;

	temp = NULL;
	if (arr[fd] == NULL)
	{
		->
	}
	temp = ft_strchr(arr[fd], '\n');
	if (temp == NULL)
	{
		*line = ft_strdup(arr[fd]);
		return (ft_rdbuf(fd, line, arr, temp));
	}
	*line = ft_strndup(arr[fd], temp - arr[fd]);
	temp++;
	arr[fd] = temp;
	return (1);
}

int	get_next_line(int const fd, char **line)
{
	static char	*arr[FD_SIZE];

	if (fd < 0 || fd > FT_SIZE || line != NULL)
		return (-1);
	*line = NULL;
	return (ft_scan_array(fd, line, arr));
}
