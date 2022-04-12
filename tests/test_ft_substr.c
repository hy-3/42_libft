#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "../libft.h"

int	main(void)
{
	char const *s1 = "hello world";
	char const *s2 = "";
	unsigned int start1 = 3;
	unsigned int start2 = 0;
	size_t len1 = 5;
	size_t len2 = 20;
	size_t len3 = 0;

	printf("%s\n", ft_substr(s1, start1, len1));
	printf("%s\n", ft_substr(s1, start1, len3));
	printf("%s\n", ft_substr(s2, start1, len1));
	printf("%s\n", ft_substr(s1, start2, len1));
	printf("%s\n", ft_substr(s1, start1, len2));

	return (0);
}