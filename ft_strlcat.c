#include <stddef.h>

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	count;
	
	count = 0;
	while (*dst++ != '\0')
		count++;
	while (*src++ != '\0' && dstsize--)
	{
		*dst = *src;
		count++;
	}
	while (*src++ != '\0')
		count++;
	return (count);
}