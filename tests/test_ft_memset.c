#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "../libft.h"

void	test(void *b, int c, size_t len)
{
	ft_memset(b, c, len);
	printf("%s\n", (char*) b);
	printf("test_ft_memset");
}

int main(void)
{
	char	str[20] = "abcdefghijk";
	int	c = 'X';
	size_t	len = 5;

	test(str, c, len);
	return (0);
}