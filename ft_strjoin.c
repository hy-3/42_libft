/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:38:40 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:38:41 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

unsigned int	count_total_len(char const *s1, char const *s2)
{
	unsigned int	total_len;
	unsigned int	i;

	total_len = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		total_len++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		total_len++;
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	total_len;
	unsigned int	i;
	unsigned int	k;
	char			*res;

	total_len = count_total_len(s1, s2);
	res = malloc((total_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (s1[i] > 0)
		res[k++] = s1[i++];
	i = 0;
	while (s2[i] > 0)
		res[k++] = s2[i++];
	return (res);
}
