/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:43:32 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/14 10:52:32 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = NULL;
	res = (t_list *) malloc(sizeof(t_list));
	if (res == NULL)
		return NULL;
	res->content = content;
	res->next = NULL;
	return (res);
}
