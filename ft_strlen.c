int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}


#include <stdio.h>
int main()
{
	int r = ft_strlen("abcdef");
	printf("%d", r);
}