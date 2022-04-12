#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char s[30] = "  abc i 123 xxx ..";
	char c = ' ';

	char **r = ft_split(s, c);
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", r[i]);
	}
	return (0);
}