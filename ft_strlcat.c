/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:41:49 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/02 09:21:17 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	n;
	size_t	ls;

	n = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	a = ft_strlen(dst);
	ls = a;
	if (dstsize == 0 || dstsize <= a)
		return (ft_strlen(src) + dstsize);
	while (src[n] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[n];
		a++;
		n++;
	}
	dst[a] = '\0';
	return (ls + ft_strlen(src));
}
