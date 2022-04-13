/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:39:09 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:39:10 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_len_of_str(char const *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i++] != '\0')
		count++;
	return (count);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len_of_s;
	int		i;
	char	*res;

	len_of_s = count_len_of_str(s);
	res = (char *) malloc((len_of_s + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
