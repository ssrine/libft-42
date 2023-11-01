/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:48:48 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/02 08:58:32 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				i;
	int				j;

	i = 0;
	j = 0;
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	while (n--)
	{
		p1[i++] = p2[j++];
	}
	return (dst);
}
