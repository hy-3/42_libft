/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:39:56 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/15 20:38:47 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

/**
 * @brief Get substring from [s]. It begins from [start] and max isze of [len]
 *
 * @param s(char const *): 
 * @param start(unsigned int): 
 * @param len(size_t): 
 * @return (char *): Substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	res = malloc((len + 1) * sizeof(char));
	if (res == NULL || s == NULL)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
		res[0] = '\0';
	else
	{
		while (*(s + start) != '\0' && len > 0)
		{
			res[i] = *(s + start);
			len--;
			start++;
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
