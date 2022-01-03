/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:02:05 by altikka           #+#    #+#             */
/*   Updated: 2022/01/03 18:30:43 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE	4
# define FD_SIZE	256

int		get_next_line(int const fd, char **line);

#endif
