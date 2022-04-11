#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*new_s;

	new_s = (char *) s;
	while (*new_s != '\0')
	{
		if (*new_s == c)
			return (new_s);
		new_s++;
	}
	if (c == 0)
		return (new_s);
	else
		return (NULL);
}
