/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:38:57 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:38:58 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;

	len_src = 0;
	while (*src != '\0' && dstsize--)
	{
		*dst++ = *src++;
		len_src++;
	}
	if (*src != '\0')
	{
		while (*src++ != '\0')
			len_src++;
	}
	*(dst - 1) = '\0';
	return (len_src);
}
