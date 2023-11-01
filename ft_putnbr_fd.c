/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:53:07 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/02 09:05:08 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	c;

	c = (long)n;
	if (c == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (c < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(c * -1, fd);
	}
	else
	{
		if (c < 10)
			ft_putchar_fd(c + '0', fd);
		else
		{
			ft_putnbr_fd(c / 10, fd);
			ft_putchar_fd(c % 10 + '0', fd);
		}
	}
}
