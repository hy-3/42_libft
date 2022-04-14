/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:23:39 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/14 16:23:41 by hiyamamo         ###   ########.fr       */
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
