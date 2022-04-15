#include <stdio.h>
#include <stdlib.h>

#include "../libft.h"

int main(void)
{
	char s[20] = "   +1234";
	char s1[40] = "-99999999999999999999999999";
	char s2[40] = "99999999999999999999999999";
	char s3[40] = "\t\v\f\r\n \f-06050";
	printf("o:%i\nm:%i\n",atoi(s),ft_atoi(s));
	printf("o:%i\nm:%i\n",atoi(s1),ft_atoi(s1));
	printf("o:%i\nm:%i\n",atoi(s2),ft_atoi(s2));
	printf("o:%i\nm:%i\n",atoi(s3),ft_atoi(s3));
	return (0);
}