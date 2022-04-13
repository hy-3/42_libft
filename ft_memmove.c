/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:37:10 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:37:11 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*char_dst;
	const unsigned char	*char_src;

	char_dst = (unsigned char *) dst;
	char_src = (const unsigned char *) src;
	if (dst < src)
		while (len--)
			*char_dst++ = *char_src++;
	else
		while (len--)
			*(char_dst + (len)) = *(char_src + (len));
	return (dst);
}
