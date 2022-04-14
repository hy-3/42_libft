#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	char *s_o = "abc.23dadsfle.com";
	char *s_m = "abc.23dadsfle.com";
	size_t n = 50;
	int c = '1';

	unsigned char *r_o = memchr(s_o, c, n);
	unsigned char *r_m = ft_memchr(s_m, c, n);
	printf("o: %s\nm: %s\n", r_o, r_m);

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("o: %s\nm:%s\n", (char *)memchr(tab, -1, 7), (char *)ft_memchr(tab, -1, 7));
	return (0);
}