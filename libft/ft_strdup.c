/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:07:19 by altikka           #+#    #+#             */
/*   Updated: 2021/11/19 16:43:25 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(*dup) * (len + 1));
	if (dup == NULL)
		return ((char *) NULL);
	ft_strcpy(dup, src);
	return (dup);
}
