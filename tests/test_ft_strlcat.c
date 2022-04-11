#include <stdio.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	unsigned long size = 4;
	char s1[10] = "12345";
	char d1[10] = "12345";
	unsigned long r1 = strlcat(s1, d1, size);
	printf("[original] r1: %lu, d1: %s\n", r1, d1);

	char s2[10] = "12345";
	char d2[10] = "12345";
	unsigned long r2 = ft_strlcat(s2, d2, size);
	printf("[original] r2: %lu, d2: %s\n", r2, d2);
	return (0);
}