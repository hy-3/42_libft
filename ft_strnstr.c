/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:39:28 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:39:29 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	count;
	int	flag;

	while (*haystack != '\0' && len--)
	{	
		count = 0;
		flag = 0;
		while (*haystack == needle[count])
		{
			count++;
			haystack++;
			flag = 1;
		}
		if (needle[count] == '\0')
			return ((char *)(haystack - count));
		if (flag == 0)
			haystack++;
	}
	return (NULL);
}
