#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "../libft.h"

int	main(void)
{
	size_t n = 50;
	char *s1_o = "abc";
	char *s2_o = "abc";
	printf("--- original ---\n");
	printf("r_o: %i\n", strncmp(s1_o, s2_o, n));
	printf("--- mine ---\n");
	char *s1_m = "abc";
	char *s2_m = "abc";
	printf("r_o: %i\n", strncmp(s1_m, s2_m, n));

	return (0);
}