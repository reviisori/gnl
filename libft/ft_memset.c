/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:47:27 by altikka           #+#    #+#             */
/*   Updated: 2021/12/23 13:36:54 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memsetone(void *b, int c, size_t len)
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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	arr[sizeof(long)];
	unsigned long	*ptr_l;
	unsigned int	*ptr_i;

	if (len < sizeof(long) * 4)
		return (ft_memsetone(b, c, len));
	ptr_l = b;
	ft_memsetone((void *) arr, c, sizeof(long));
	while (len >= sizeof(long) * 4)
	{
		*(long *) ptr_l++ = *(long *) arr;
		*(long *) ptr_l++ = *(long *) arr;
		*(long *) ptr_l++ = *(long *) arr;
		*(long *) ptr_l++ = *(long *) arr;
		len -= sizeof(long) * 4;
	}
	ptr_i = ptr_l;
	while (len >= sizeof(int))
	{
		*(int *) ptr_i++ = *(int *) arr;
		len -= sizeof(int);
	}
	if (len > 0)
		return (ft_memsetone((void *) ptr_i), c, len);
	return (b);
}
