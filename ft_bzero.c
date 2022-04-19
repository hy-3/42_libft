/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:35:02 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/19 10:59:39 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*char_s;

	char_s = (unsigned char *) s;
	while (n > 0)
	{
		*char_s++ = 0;
		n--;
	}
}
