#include <stdlib.h>

int	count_num_of_strings(char const *s, char c)
{
	int	i;
	int	res;
	int	flag;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		flag = 0;
		if (s[i] != c)
		{
			res++;
			flag = 1;
			while (s[i++] != c)
			{
				if (s[i] == '\0')
					break ;
				continue ;
			}
		}
		if (flag == 0)
			i++;
	}
	return (res);
}

// TODO implement Free
char	**ft_split(char const *s, char c)
{
	int	num_of_strings;
	char	**res;
	int	i;
	int	k;
	int	start;
	int	end;
	int	l;
	int	flag;

	num_of_strings = count_num_of_strings(s, c);
	res = malloc(num_of_strings * sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		flag = 0;
		if (s[i] != c)
		{
			flag = 1;
			start = i;
			while (s[i++] != c)
			{
				if (s[i] == '\0')
					break ;
				continue ;
			}
			end = i;
			res[k] = malloc((end - start + 1) * sizeof(char));
			// if (res[k] == NULL)
			// 	free();
			l = 0;
			while ((end - start) > 0)
			{
				res[k][l] = s[start];
				start++;
				l++;
			}
			res[k][l] = '\0';
			k++;
		}
		if (flag == 0)
			i++;
	}
	return (res);
}