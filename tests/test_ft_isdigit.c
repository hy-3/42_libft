#include <ctype.h>
#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char c = 'A';
	int i = 1;
	char ci = '3';
	
	int original_r1 = isdigit(c);
	int original_r2 = isdigit(i);
	int original_r3 = isdigit(ci);
	printf("%d, %d, %d", original_r1, original_r2, original_r3);
	printf("\n");
	
	int my_r1 = ft_isdigit(c);
	int my_r2 = ft_isdigit(i);
	int my_r3 = ft_isdigit(ci);
	printf("%d, %d, %d", my_r1, my_r2, my_r3);

	return (0);
}
