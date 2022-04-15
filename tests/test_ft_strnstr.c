#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	size_t n = -1;
	char *h_o = "is there a nyacat ?";
	char *nee_o = "is there a nyacat ?";
	char *h_m = "is there a nyacat ?";
	char *nee_m = "is there a nyacat ?";

	char *r_o = strnstr(h_o, nee_o, n);
	char *r_m = ft_strnstr(h_m, nee_m, n);
	printf("-- o --\n%s\n-- m --\n%s\n", r_o, r_m);

	return (0);
}