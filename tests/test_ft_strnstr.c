#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	size_t n = 9;
	char *h_o = "aaabcabcd";
	char *nee_o = "abcd";
	char *h_m = "aaabcabcd";
	char *nee_m = "abcd";

	char *r_o = strnstr(h_o, nee_o, n);
	char *r_m = ft_strnstr(h_m, nee_m, n);
	printf("-- o --\n%s\n-- m --\n%s\n", r_o, r_m);

	return (0);
}