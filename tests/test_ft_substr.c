#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "../libft.h"

int	main(void)
{
	char const *s1 = "1";
	unsigned int start1 = 42;
	size_t len1 = 4200000;

	printf("%s\n", ft_substr(s1, start1, len1));

	return (0);
}