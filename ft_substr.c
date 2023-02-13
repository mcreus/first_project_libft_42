/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:14:52 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/13 12:06:29 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*la fonction sert a extraire une sous chaine s, en indiquant le debut et la
taille demandee, elle est renvoyee en fin de fonction*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (ft_strlen(s) < start)
	{
		str = malloc(1);
		str[0] = 0;
		return (str);
	}
	if (start + len > ft_strlen(s))
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
			str[i] = s[start + i];
			i++;
	}
	str[i] = 0;
	return (str);
}
