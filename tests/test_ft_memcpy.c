#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "../libft.h"

int	main(void)
{
	char dest_o[20];
	char src_o[20] = "abcdef";
	char dest_my[20];
	char src_my[20] = "abcdef";
	unsigned long	n = 3;

	memcpy(dest_o, src_o, n);
	printf("o: %s\n", dest_o);
	ft_memcpy(dest_my, src_my, n);
	printf("my: %s\n", dest_my);
	return (0);
}