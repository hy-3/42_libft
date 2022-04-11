#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*res;
	int	count;

	count = 0;
	while (s1[count] != '\0')
		count++;
	res = malloc(count * sizeof(char));
	if (res == NULL)
		return (NULL);
	count = 0;
	while (s1[count] != '\0')
	{
		res[count] = s1[count];
		count++;
	}
	res[count] = '\0';
	return (res);
}