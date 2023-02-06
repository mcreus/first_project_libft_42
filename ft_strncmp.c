/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:22:42 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/06 11:40:13 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] != '\0' && s1[a] == s2[a] && n > 0)
	{
		a++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[a] - s2[a]);
}