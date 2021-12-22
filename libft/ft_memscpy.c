/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memscpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:51:39 by altikka           #+#    #+#             */
/*   Updated: 2021/12/22 19:50:31 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memscpy(void *dst, void const *src, size_t n)
{
	void	*ptr;

	if (!dst && !src)
		return (dst);
	ptr = dst;
	while (n >= sizeof(long))
	{
		*(long *) ptr = *(long const *) src;
		ptr += sizeof(long);
		src += sizeof(long);
		n -= sizeof(long);
	}
	while (n >= sizeof(int))
	{
		*(int *) ptr = *(int const *) src;
		ptr += sizeof(int);
		src += sizeof(int);
		n -= sizeof(int);
	}
	while (n > 0)
	{
		*(unsigned char *) ptr++ = *(unsigned char const *) src++;
		n--;
	}
	return (dst);
}
