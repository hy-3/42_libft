#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char s1[30] = "   xx hello worldx. x     ";
	char set[3] = "x ";
	printf("%s\n",ft_strtrim(s1, set));
	return (0);
}