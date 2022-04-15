/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:39:28 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/15 19:25:10 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Find first occurence of [needle] from haystack,
 *        not more than [len] will be searched.
 * @param haystack(const char *): String it will search from.
 * @param needle(const char *): String which will be searched.
 * @param len(size_t): Size of bytes to be searched.
 * @return (char *): IF [needle] is empty string -> [haystack]
                     IF [needle] isn't found -> NULL
					 ELSE -> Pointer of first char of first occurence.
 */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	int		flag;

	if (haystack == needle)
		return ((char *) haystack);
	if (*needle == '\0')
		if (len == 0 || *haystack == '\0')
			return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		count = 0;
		flag = 0;
		while (*haystack == needle[count] && *haystack != '\0')
		{
			count++;
			haystack++;
			flag = 1;
		}
		if (needle[count] == '\0')
			return ((char *)(haystack - count));
		if (flag == 0)
			haystack++;
		len--;
	}
	return (NULL);
}
