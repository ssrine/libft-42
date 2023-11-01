/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:04:11 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/04 05:27:14 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;

	p1 = (char *)dst;
	p2 = (char *)src;
	if (!src && !dst)
		return (NULL);
	if (p1 < p2)
		ft_memcpy(p1, p2, len);
	else
	{
		p1 += len;
		p2 += len;
		while (len--)
		{
			*--p1 = *--p2;
		}
	}
	return (p1);
}
