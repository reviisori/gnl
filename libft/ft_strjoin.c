/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:44:59 by altikka           #+#    #+#             */
/*   Updated: 2021/12/28 14:54:11 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*join;

	if (s1 != NULL && s2 == NULL)
		return (ft_strdup(s1));
	if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	if (s1 != NULL && s2 != NULL)
	{
		len = (ft_strlen(s1) + ft_strlen(s2));
		join = (char *)malloc(sizeof(*join) * (len + 1));
		if (join == NULL)
			return ((char *) NULL);
		ft_strcpy(join, s1);
		ft_strcat(join, (char *) s2);
		return (join);
	}
	return ((char *) NULL);
}
