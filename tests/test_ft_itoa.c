#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1000));
	printf("%s\n", ft_itoa(-1000));
	return (0);
}
