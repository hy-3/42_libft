/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:36:54 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/19 11:16:51 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*char_s1;
	unsigned char	*char_s2;

	char_s1 = (unsigned char *) s1;
	char_s2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*char_s1 != *char_s2)
			return (*char_s1 - *char_s2);
		char_s1++;
		char_s2++;
		n--;
	}
	return (0);
}
