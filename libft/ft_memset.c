/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:47:27 by altikka           #+#    #+#             */
/*   Updated: 2021/12/09 21:47:10 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (i < len)
	{
		*(unsigned char *) ptr = (unsigned char ) c;
		ptr++;
		i++;
	}
	return (b);
}
