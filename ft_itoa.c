/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:04:22 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/04 05:27:07 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	s_igne(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		l;

	l = ft_len(n);
	p = malloc(sizeof(char) * (l + 1));
	if (!p)
		return (0);
	p[l] = '\0';
	if (n < 0)
		p[0] = '-';
	else if (n == 0)
		p[0] = '0';
	while (n != 0)
	{
		l--;
		p[l] = s_igne(n % 10) + '0';
		n = n / 10;
	}
	return (p);
}
