/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:38:03 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/16 12:02:24 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cust_count_digits(int n);

void	print_int_lowest_num(int fd)
{
	char	*num;
	int		i;

	write(fd, "-", 1);
	num = "2147483648";
	i = 0;
	while (i < 10)
		write(fd, &num[i++], 1);
}

int	base_ten_power(int n)
{
	int	res;

	res = 1;
	while (n-- > 0)
		res *= 10;
	return (res);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		digit;
	char	each_int;

	if (n == -2147483648)
		print_int_lowest_num(fd);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		digit = cust_count_digits(n);
		while (digit > 0)
		{
			each_int = n / base_ten_power(digit - 1) + '0';
			write(fd, &each_int, 1);
			n %= base_ten_power(digit - 1);
			digit--;
		}
	}
}
