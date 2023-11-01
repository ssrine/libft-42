/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:57:48 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/04 05:27:53 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		len;

	p = (char *)s;
	len = ft_strlen(p);
	while (len >= 0)
	{
		if (p[len] == (char)c)
			return (p + len);
		len--;
	}
	if ((char)c == '\0')
		return (p + ft_strlen(s));
	return (0);
}
