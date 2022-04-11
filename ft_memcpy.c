#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*char_dest;
	const unsigned char	*char_src;

	char_dest = (unsigned char *) dest;
	char_src = (const unsigned char*) src;
	while (n--)
		*char_dest++ = *char_src++;

	return (dest);
}