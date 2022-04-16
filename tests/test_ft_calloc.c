#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "../libft.h"

int	main(void)
{
	size_t c = 10;
	size_t s = 4;

	char *r_o = calloc(SIZE_MAX, SIZE_MAX);
	char *r_m = ft_calloc(SIZE_MAX, SIZE_MAX);

	printf("-- O --\n");
	printf("%s ", r_o);
	printf("\n-- M --\n");
	printf("%s ", r_m);
	printf("\n");

	return (0);
}