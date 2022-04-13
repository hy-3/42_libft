/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:38:51 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:38:52 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	while (*dst++ != '\0')
		count++;
	while (*src++ != '\0' && dstsize--)
	{
		*dst = *src;
		count++;
	}
	while (*src++ != '\0')
		count++;
	return (count);
}
