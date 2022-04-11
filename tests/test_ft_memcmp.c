#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	size_t n = 20;
	char s1_o[10] = "abcdef";
	char s2_o[10] = "abcdef";
	int r_o = memcmp(s1_o, s2_o, n);
	char s1_m[10] = "abcdef";
	char s2_m[10] = "abcdef";
	int r_m = ft_memcmp(s1_m, s2_m, n);
	printf("o: %i\nm: %i\n", r_o, r_m);
	return (0);
}

/*
Q?
./a.out
	o: 44
	m: 0
*/