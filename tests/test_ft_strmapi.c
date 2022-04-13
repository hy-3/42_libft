#include <stdio.h>

#include "../libft.h"

char	func(unsigned int i, char c)
{
	return (c + i - 32);
}

int	main(void)
{
	char s[20] = "abcdefg";
	printf("%s\n", ft_strmapi(s, func));
	return (0);
}