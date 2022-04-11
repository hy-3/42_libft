#include <stdio.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	char src_o[10] = "123abc";
	char *dest_o = src_o + 2;
	char src_m[10] = "123abc";
	char *dest_m = src_m + 2;
	unsigned long len = 4;

	memmove(dest_o, src_o, len);
	printf("dest_o: %s\n", dest_o);
	ft_memmove(dest_m, src_m, len);
	printf("dest_m: %s\n", dest_m);

	printf("==========\n");

	char src2_o[10] = "123abc";
	char *dest2_o = src2_o - 2;
	char src2_m[10] = "123abc";
	char *dest2_m = src2_m - 2;
	unsigned long len2 = 4;

	memmove(dest2_o, src2_o, len2);
	printf("dest_o: %s\n", dest2_o);
	ft_memmove(dest2_m, src2_m, len2);
	printf("dest_m: %s\n", dest2_m);

	return(0);
}