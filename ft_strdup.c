/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:38:26 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:38:27 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		count;

	count = 0;
	while (s1[count] != '\0')
		count++;
	res = malloc(count * sizeof(char));
	if (res == NULL)
		return (NULL);
	count = 0;
	while (s1[count] != '\0')
	{
		res[count] = s1[count];
		count++;
	}
	res[count] = '\0';
	return (res);
}
