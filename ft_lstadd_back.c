/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:23:57 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/16 13:59:24 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_node;
	t_list	*current_next;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current_node = (*lst);
	current_next = (*lst)->next;
	while (current_next != NULL)
	{
		current_node = current_next;
		current_next = current_next->next;
	}
	current_node->next = new;
}
