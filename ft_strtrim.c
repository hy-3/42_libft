#include <stdio.h>




#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	k;
	int	index_of_start;
	int	index_of_end;
	int	flag;
	char	*res;

	i = 0;
	index_of_start = 0;
	index_of_end = 0;
	// get start
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
		{
			index_of_start = i;
			break;
		}
		i++;
	}
	printf("start: %i\n", i);
	// make the pointer to the end of str
	i = 0;
	while (s1[i] != '\0')
		i++;
	i--;
	// get end
	while (i > index_of_start)
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
		{
			index_of_end = i;
			break;
		}
		i--;
	}
	printf("end: %i\n", i);
	// take out start to end part of str
	res = malloc((index_of_end - index_of_start + 2) * sizeof(char));
	i = 0;
	while ((index_of_end - index_of_start + 1) > 0)
	{
		res[i] = s1[index_of_start];
		i++;
		index_of_start++;
	}
	res[i] = '\0';
	return (res);
}