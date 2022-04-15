#include <stdio.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	unsigned long size = 6;
	char *s1 = "aaaaa";
	char d1[10] = "BBB";
	unsigned long r1 = strlcat(d1, s1, size);
	printf("[original] r1: %lu, d1: %s\n", r1, d1);

	char *s2 = "aaaaa";
	char d2[10] = "BBB";
	unsigned long r2 = ft_strlcat(d2, s2, size);
	printf("[my] r2: %lu, d2: %s\n", r2, d2);
	return (0);
}