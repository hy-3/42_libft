#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *set = " \n\t";
	printf("%s\n",ft_strtrim(s1, set));
	return (0);
}