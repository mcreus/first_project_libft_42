/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:00:16 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/14 16:20:31 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	len;
	long int	nb;
	char		*str;

	len = ft_nb(n);
	nb = n;
	if (n < 0)
		nb *= -1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	if (nb == 0)
		str[0] = '0';
	else
	{
		while (len-- && nb)
		{
			str[len] = (nb % 10) + '0';
			nb = (nb - (nb % 10)) / 10;
		}
		if (n < 0)
			str[len] = '-';
	}
	return (str);
}
/*convert an integer to an ascii string*/
