#include <stdio.h>
#include <ctype.h>

#include "../libft.h"

void	test(int c)
{
	char r_o = toupper(c);
	char r_m = ft_toupper(c);
	printf("-- c: %c --\n", (char) c);
	printf("r_o: %c, r_m: %c\n", r_o, r_m);
}

int	main(void)
{
	char c1 = 'x';
	char c2 = 'E';
	char c3 = '\t';
	test(c1);
	test(c2);
	test(c3);
	return (0);
}