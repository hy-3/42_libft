/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:39:50 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/11/16 15:46:55 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trim out [set] from begging and end of [s1].
 *
 * @param s1(char const *): Source string to be trimmed.
 * @param set(char const *): A set of char which the function will trim.
 * @return (char *): Trimmed string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;

	if (!s1)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	s1len = ft_strlen(s1);
	if (!*s1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[s1len]) && s1len > 0)
		s1len--;
	return (ft_substr(s1, 0, s1len + 1));
}
