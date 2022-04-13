#include <ctype.h>
#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char c = 'A';
	int i = 1;
	char ci = '3';
	
	int original_r1 = isprint(c);
	int original_r2 = isprint(i);
	int original_r3 = isprint(ci);
	printf("%d, %d, %d", original_r1, original_r2, original_r3);
	printf("\n");
	
	int my_r1 = ft_isprint(c);
	int my_r2 = ft_isprint(i);
	int my_r3 = ft_isprint(ci);
	printf("%d, %d, %d", my_r1, my_r2, my_r3);
	return 0;
}