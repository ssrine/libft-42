/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:47:23 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/02 09:33:23 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_start(char const *s1, char const *set)
{
	int	s_len;

	s_len = 0;
	while (s1[s_len] != '\0')
	{
		if (!is_set(set, s1[s_len]))
			break ;
		s_len++;
	}
	return (s_len);
}

static int	ft_end(char const *s1, char const *set, int where_first)
{
	int	l_len;

	l_len = ft_strlen(s1) - 1;
	while (l_len >= where_first)
	{
		if (!is_set(set, s1[l_len]))
			break ;
		l_len--;
	}
	return (l_len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		last;
	int		i;
	int		first;
	char	*new;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	first = ft_start(s1, set);
	last = ft_end(s1, set, first);
	new = malloc(((last - first) + 1) * sizeof(char));
	if (new != NULL)
	{
		while (first < last)
			new[i++] = s1[first++];
		new[i] = '\0';
	}
	return (new);
}
