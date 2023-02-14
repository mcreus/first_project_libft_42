/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:26:10 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/14 15:41:06 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
/*the same as strchr but starting from the end*/
