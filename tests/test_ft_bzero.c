#include <stdio.h>
#include <stddef.h>
#include <strings.h>

#include "../libft.h"

void	test(void *s, size_t n)
{
	printf("before original: %s\n", (char*)s);
	bzero(s, n);
	printf("after original: %s\n", (char*)s);
	printf("after original+4: %s\n", (char*)s+4);
	printf("before mine: %s\n", (char*)s);
	ft_bzero(s, n);
	printf("after mine+4: %s\n", (char*)s+4);
}

int	main(void)
{
	char str[10] = "abcdefghi";
	size_t num = 3;
	test(str, num);
	return (0);
}
