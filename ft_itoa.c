/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:36:33 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/16 18:31:53 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	cust_count_digits(int n);

void	add_minus_sign(char *res, int original_n)
{
	if (original_n < 0)
		res[0] = '-';
}

char	*deal_with_edge_case(char *res, int original_n)
{
	if (res == NULL)
		res = NULL;
	else if (original_n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		res[2] = '1';
		res[3] = '4';
		res[4] = '7';
		res[5] = '4';
		res[6] = '8';
		res[7] = '3';
		res[8] = '6';
		res[9] = '4';
		res[10] = '8';
		res[11] = '\0';
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		original_n;
	int		digit;
	char	*res;

	original_n = n;
	if (original_n < 0 && original_n != -2147483648)
		n *= -1;
	digit = cust_count_digits(n);
	if (original_n < 0)
		digit += 1;
	res = (char *) malloc((digit + 1) * sizeof(char));
	if (res == NULL || original_n == -2147483648)
		return (deal_with_edge_case(res, original_n));
	res[digit--] = '\0';
	while (n >= 0)
	{
		res[digit--] = n % 10 + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	add_minus_sign(res, original_n);
	return (res);
}
