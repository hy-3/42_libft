/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:35:11 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/16 15:49:43 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Allocates [count] objects which are [size] bytes to memory.
 * 
 * @param count(size_t): Number of objects
 * @param size(size_t): Byte sizes.
 * @return (void *): Pointer to allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			total;

	if (count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	res = malloc(total);
	if (res == NULL)
		return (NULL);
	while (total--)
		res[total] = 0;
	return (res);
}
