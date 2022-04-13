#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t	total;

	total = count * size;
	res = malloc(total);
	while (total--)
		res[total] = 0;
	return (res);
}
