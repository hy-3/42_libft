#include <stdio.h>
#include <stdlib.h>

#include "../libft.h"

int main(void)
{
	char s[20] = "  -2147483648   ";
	char s1[20] = " \t 2147483648   ";
	char s2[20] = " \0 2147483648   ";
	char s3[20] = "  2147483647   ";
	printf("o:%i\nm:%i\n",atoi(s),ft_atoi(s));
	printf("o:%i\nm:%i\n",atoi(s1),ft_atoi(s1));
	printf("o:%i\nm:%i\n",atoi(s2),ft_atoi(s2));
	printf("o:%i\nm:%i\n",atoi(s3),ft_atoi(s3));
	return (0);
}