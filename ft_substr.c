#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	unsigned int	i;

	res = malloc(len * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*(s + start) != '\0' && len > 0)
	{
		res[i] = *(s + start);
		len--;
		start++;
		i++;
	}
	return (res);
}
