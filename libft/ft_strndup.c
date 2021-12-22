/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:52:49 by altikka           #+#    #+#             */
/*   Updated: 2021/12/02 15:46:13 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *src, size_t len)
{
	char	*dup;

	dup = (char *)malloc(sizeof(*dup) * (len + 1));
	if (dup == NULL)
		return ((char *) NULL);
	ft_strncpy(dup, src, len);
	dup[len] = '\0';
	return (dup);
}
