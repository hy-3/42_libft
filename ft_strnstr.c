#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	count;
	int	flag;

	while (*haystack != '\0' && len--)
	{	
		count = 0;
		flag = 0;
		while (*haystack == needle[count])
		{
			count++;
			haystack++;
			flag = 1;
		}
		if (needle[count] == '\0')
			return ((char *)(haystack - count));
		if (flag == 0)
			haystack++;
	}
	return (NULL);
}
