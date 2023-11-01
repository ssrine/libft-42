/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:42:10 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/02 22:36:44 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static void	free_str(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static int	size_word(char const *s, char set, int i)
{
	int	size;

	size = 0;
	while (s[i] != set && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	str = (char **)(malloc(sizeof(char *) * (word_counter(s, c) + 1)));
	if (!str)
		return (NULL);
	j = 0;
	while (j < word_counter(s, c))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, size_word(s, c, i));
		if (!str[j])
		{
			free_str(str, j);
			return (NULL);
		}
		i += size_word(s, c, i);
		j++;
	}
	str[j] = 0;
	return (str);
}
