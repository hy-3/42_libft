/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:37:57 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:37:58 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_len_of_str(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	len_of_s;

	len_of_s = count_len_of_str(s);
	write(fd, s, len_of_s);
	write(fd, "\n", 1);
}
