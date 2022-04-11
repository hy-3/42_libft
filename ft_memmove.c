#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*char_dst;
	const unsigned char	*char_src;

	char_dst = (unsigned char *) dst;
	char_src = (const unsigned char *) src;
	if (dst < src)
		while (len--)
			*char_dst++ = *char_src++;
	else
		while (len--)
			*(char_dst + (len)) = *(char_src + (len));
	return (dst);
}