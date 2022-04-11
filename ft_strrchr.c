#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len_s;

	len_s = 0;
	while (*s++ != '\0')
		len_s++;
	if (c == 0)
		return (char *) s;
	while (len_s-- > 0)
		if (*--s == c)
			return ((char *) s);
	return (NULL);
}