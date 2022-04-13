#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char s[50] = "  abc i 123 xxx ..dasfd gff  abc ";
	char c = ' ';

	char **r = ft_split(s, c);
	for (int i = 0; i < 8; i++)
	{
		printf("[res] i:%i p:%p s:%s\n", i, r[i],r[i]);
	}
	return (0);
}