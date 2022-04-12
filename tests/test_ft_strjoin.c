#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char s1[10] = "abc";
	char s2[10] = "123";
	char s3[10] = "";

	printf("%s\n",ft_strjoin(s1, s2));
	printf("%s\n",ft_strjoin(s1, s3));
	return (0);
}