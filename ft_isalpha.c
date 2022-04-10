/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:11:37 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/08 15:11:43 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if ((64 < i && i < 91) || (96 < i && i < 123))
		return (1);
	else
		return (0);
}


// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
// 	char c = 'A';
// 	int i = 1;
// 	char s[] = "string";
// 	char ci = '1';
	
// 	int original_r1 = isalpha(c);
// 	int original_r2 = isalpha(i);
// 	int original_r3 = isalpha(s);
// 	int original_r4 = isalpha(ci);
// 	printf("%d, %d, %d, %d", original_r1, original_r2, original_r3, original_r4);
// 	printf("\n");
	
// 	int my_r1 = ft_isalpha(c);
// 	int my_r2 = ft_isalpha(i);
// 	int my_r3 = ft_isalpha(s);
// 	int my_r4 = ft_isalpha(ci);
// 	printf("%d, %d, %d, %d", my_r1, my_r2, my_r3, my_r4);
// 	return 0;
// }
