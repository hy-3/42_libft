/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:24:08 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/16 13:54:15 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;
	t_list	*current_next;

	if (lst == NULL)
		return (NULL);
	current_node = lst;
	current_next = lst->next;
	while (current_next != NULL)
	{
		current_node = current_next;
		current_next = current_next->next;
	}
	return (current_node);
}
