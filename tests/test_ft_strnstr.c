#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	size_t n = 20;
	char h_o[20] = "FooBaBarHogeBa\nrs";
	char n_o[20] = "Bars";
	char h_m[20] = "FooBaBarHogeBa\nrs";
	char n_m[20] = "Bars";

	char *r_o = strnstr(h_o, n_o, n);
	char *r_m = ft_strnstr(h_m, n_m, n);

	printf("o:%s\nm:%s\n", r_o, r_m);

	return (0);
}