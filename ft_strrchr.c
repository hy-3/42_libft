/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:39:43 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:39:44 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len_s;

	len_s = 0;
	while (*s++ != '\0')
		len_s++;
	if (c == 0)
		return ((char *) s);
	while (len_s-- > 0)
		if (*--s == c)
			return ((char *) s);
	return (NULL);
}
