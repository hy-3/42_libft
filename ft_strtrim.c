#include <stdlib.h>

int	find_index_of_trimmed_start(char const *s1, char const *set)
{
	int	res;
	int	i;
	int	k;
	int	flag;

	res = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		flag = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
				flag = 1;
			k++;
		}
		if (flag == 0)
			break ;
		i++;
	}	
	return (res + i);
}

int	find_index_of_trimmed_end(char const *s1, char const *set)
{
	int	res;
	int	i;
	int	k;
	int	flag;

	res = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (i-- > 0)
	{
		k = 0;
		flag = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
				flag = 1;
			k++;
		}
		if (flag == 0)
			break ;
	}
	return (res + i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	index_of_start;
	int	index_of_end;
	char	*res;

	i = 0;
	index_of_start = 0;
	index_of_end = 0;
	index_of_start = find_index_of_trimmed_start(s1, set);
	index_of_end = find_index_of_trimmed_end(s1, set);
	res = malloc((index_of_end - index_of_start + 2) * sizeof(char));
	while ((index_of_end - index_of_start + 1) > 0)
		res[i++] = s1[index_of_start++];
	res[i] = '\0';
	return (res);
}
