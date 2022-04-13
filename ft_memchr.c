/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:36:42 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:36:46 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_s;

	char_s = (unsigned char *) s;
	while (n--)
	{
		if (*char_s == c)
			return (char_s);
		char_s++;
	}
	return (NULL);
}
