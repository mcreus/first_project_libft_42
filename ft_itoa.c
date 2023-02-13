/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:00:16 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/13 10:23:46 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			count;
	int			i;
	long int	j;

	j = n;
	count = ft_count_size(n);
	i = 0;
	if (j < 0 && count == 0)
		count++;
	str = ft_strnew(count);
	if (!(str))
		return (NULL);
	if (j < 0)
	{
		j *= -1;
		str[0] = '-';
		i++;
	}
	while (count >= i)
	{
		str[count] = (j % 10) + '0';
		count--;
		j /= 10;
	}
	return (str);
}
