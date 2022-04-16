#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char s[50] = "  olol";
	char c = ' ';

	char **r = ft_split(s, c);
	for (int i = 0; i < 2; i++)
	{
		printf("[res] i:%i p:%p s:%s\n", i, r[i],r[i]);
	}

	char s2[50] = "olol  ";
	char c2 = ' ';

	char **r2 = ft_split(s2, c2);
	for (int i = 0; i < 2; i++)
	{
		printf("[res] i:%i p2:%p s2:%s\n", i, r2[i],r2[i]);
	}
	return (0);
}
