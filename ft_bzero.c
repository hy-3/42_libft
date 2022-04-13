#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*char_s;

	char_s = (unsigned char *) s;
	while (n--)
		*char_s++ = '\0';
}
