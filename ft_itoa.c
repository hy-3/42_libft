/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:36:33 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:36:35 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	add_minus_sign(char *res, int original_n)
{
	if (original_n < 0)
		res[0] = '-';
}

char	*ft_itoa(int n)
{
	int		original_n;
	int		digit;
	char	*res;

	original_n = n;
	if (original_n == -2147483648)
		return ("-2147483648");
	if (original_n == 0)
		return ("0");
	if (original_n < 0)
		n *= -1;
	digit = count_digits(n);
	if (original_n < 0)
		digit += 1;
	res = (char *) malloc((digit + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[digit--] = '\0';
	while (n > 0)
	{
		res[digit--] = n % 10 + '0';
		n /= 10;
	}
	add_minus_sign(res, original_n);
	return (res);
}
