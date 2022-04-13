#include <ctype.h>
#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char c = 'A';
	int i = 1;
	char ci = '1';
	
	int original_r1 = isalpha(c);
	int original_r2 = isalpha(i);
	int original_r3 = isalpha(ci);
	printf("%d, %d, %d", original_r1, original_r2, original_r3);
	printf("\n");
	
	int my_r1 = ft_isalpha(c);
	int my_r2 = ft_isalpha(i);
	int my_r3 = ft_isalpha(ci);
	printf("%d, %d, %d", my_r1, my_r2, my_r3);

	return (0);
}
