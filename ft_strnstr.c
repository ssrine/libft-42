/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:25:53 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/02 21:43:04 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	i;
	size_t	j;
	char	*p1;
	char	*p2;

	i = 0;
	j = 0;
	p1 = (char *)h;
	p2 = (char *)n;
	if ((!p1 || !p2) && l == 0)
		return (NULL);
	if (p2[j] == '\0')
		return (p1);
	while (p1[i] != '\0' && i < l)
	{
		while (p1[i + j] == p2[j] && p1[i + j] != '\0' && j + i < l)
			j++;
		if (p2[j] == '\0')
			return (p1 + i);
		i++;
		j = 0;
	}
	return (0);
}
