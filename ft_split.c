/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:38:15 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/18 10:50:59 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	count_num_of_strings(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			res++;
			while (s[i++] != c && s[i] != '\0')
				continue ;
		}
		else
			i++;
	}
	return (res);
}

void	fill_string_in_array(char const *s, char c, char **res)
{
	int	i;
	int	k;
	int	l;
	int	start;

	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			res[++k] = (char *) malloc((i - start + 1) * sizeof(char));
			if (res[k] == NULL)
				continue ;
			l = 0;
			while ((i - start) > 0)
				res[k][l++] = s[start++];
			res[k][l] = '\0';
		}
		else
			i++;
	}
}

void	free_if_malloc_failed(char **res, int num_of_strings)
{
	int	flag_if_malloc_failed;
	int	i;

	flag_if_malloc_failed = 0;
	i = 0;
	while (i < num_of_strings)
		if (res[i++] == NULL)
			flag_if_malloc_failed = 1;
	i = 0;
	if (flag_if_malloc_failed == 1)
	{
		while (i < num_of_strings)
		{
			if (res[i] != NULL)
				free(res[i]);
			i++;
		}
		free(res);
		res = NULL;
	}
}

/**
 * @brief Split [s] based on [c] delimiter.
 *
 * @param c(char): Delimiter.
 * @param s(char const *s): Source string to split.
 * @return (char **): The array of string which has each splitted string.
 */
char	**ft_split(char const *s, char c)
{
	int		num_of_strings;
	char	**res;

	if (s == NULL)
		return (NULL);
	num_of_strings = count_num_of_strings(s, c);
	res = (char **) malloc((num_of_strings + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	fill_string_in_array(s, c, res);
	res[num_of_strings] = NULL;
	free_if_malloc_failed(res, num_of_strings);
	return (res);
}
