/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:50:14 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/19 13:50:17 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_addr;
	t_list	*current_next;

	current_addr = *lst;
	while (current_addr != NULL)
	{
		current_next = current_addr->next;
		del(current_addr->content);
		free(current_addr);
		current_addr = current_next;
	}
	*lst = NULL;
}
