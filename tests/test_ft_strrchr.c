#include <stdio.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	char s1_o[10] = "b";
	int c1_o = 'c';
	// char s1_o[10] = "abc\0defa";
	// int c1_o = '\0';
	char *r1_o = strrchr(s1_o, c1_o);
	printf("[o] r1_o:%s, r1_o(addr):%p\n", r1_o, r1_o);
	char s1_m[10] = "b";
	int c1_m = 'c';
	// char s1_m[10] = "abc\0defa";
	// int c1_m = '\0';
	char *r1_m = ft_strrchr(s1_m, c1_m);
	printf("[m] r1_m:%s, r1_m(addr):%p\n", r1_m, r1_m);

	return (0);
}