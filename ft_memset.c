/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:37:15 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/19 11:20:53 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_b;

	tmp_b = (unsigned char *) b;
	while (len > 0)
	{
		*tmp_b++ = (unsigned char) c;
		len--;
	}
	return (b);
}
