#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "../libft.h"

int	main(void)
{
	char const *s1 = "01234";
	unsigned int start1 = 10;
	size_t len1 = 10;

	printf("%s\n", ft_substr(s1, start1, len1));


	return (0);
}