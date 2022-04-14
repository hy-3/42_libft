/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:24:56 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/14 17:59:31 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*old;
	t_list	*new;
	t_list	*res;
	int	count;

	count = 0;
	old = NULL;
	new = NULL;
	res = NULL;
	while (lst != NULL)
	{
		old = new;
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
			del(new->content);
		if (count == 0)
			res = new;
		else
			old->next = new;
		lst = lst->next;
		count++;
	}
	new->next = NULL;
	return (res);
}
