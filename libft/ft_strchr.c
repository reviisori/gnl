/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:41:00 by altikka           #+#    #+#             */
/*   Updated: 2021/11/10 16:27:47 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	char	*ptr;
	size_t	i;

	ptr = ((char *) NULL);
	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c)
		{
			ptr = ((char *) &s[i]);
			return (ptr);
		}
		i++;
	}
	return (ptr);
}
