/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:27:17 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/14 17:31:17 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
	if (!str)
		return (NULL);
	str -> content = content;
	str -> next = NULL;
	return (str);
}
