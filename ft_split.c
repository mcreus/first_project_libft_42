/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:58:21 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/14 16:18:52 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			word++;
		i++;
	}
	return (word);
}

static char	**free_word(char **s)
{
	while (*s)
		free(*s++);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**split;

	j = 0;
	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		i = 0;
		while (s[i] != c && s[i])
			i++;
		if (*s && i)
			split[j++] = ft_substr(s, 0, i);
		if (i != 0 && !(split[j - 1]))
			return (free_word(split));
		s += i;
	}
	split[j] = 0;
	return (split);
}
/*splits a string into a list of substrings according 
to a specified delimiter*/
