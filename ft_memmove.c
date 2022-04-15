/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:37:10 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/15 21:25:57 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Copy [len] bytes from [src] to [dst].
 * it is safer than memcpy when [src] and [dst] memory areas are overlapped.
 *
 * @param dst(void *): Pointer to destination memory area.
 * @param src(const void *): Pointer to source memory area.
 * @param len(size_t): Number of bytes to copy.
 * @return (void *): The original value of [dst].
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*char_dst;
	const unsigned char	*char_src;

	if (len == 0 || dst == src)
		return (dst);
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
