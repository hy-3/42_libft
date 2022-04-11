#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "../libft.h"

int	main(void)
{
	size_t c = 10;
	size_t s = 4;

	int *r_o = calloc(c, s);
	int *r_m = ft_calloc(c, s);

	printf("-- O --\n");
	for (size_t i = 0; i < 10; i++)
		printf("%d ", r_o[i]);
	printf("\n-- M --\n");
	for (size_t i = 0; i < 10; i++)
		printf("%d ", r_m[i]);
	printf("\n");

	return (0);
}