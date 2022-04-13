#include <stdio.h>

#include "../libft.h"

void	func(unsigned int i, char *c)
{
	*c += (i - 32);
}

int	main(void)
{
	char s[20] = "abcdefg";
	ft_striteri(s, func);
	printf("%s\n", s);
	return (0);
}