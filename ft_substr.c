/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:14:52 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/14 19:32:25 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*extracts a substring s, indicating the beginning and 
the requested size then is returned*/
