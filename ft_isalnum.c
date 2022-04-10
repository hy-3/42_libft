int	ft_isalnum(int i)
{
	if ((64 < i && i < 91) || (96 < i && i < 123) || (47 < i && i < 58))
		return (1);
	else
		return (0);
}


// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
// 	char c = 'A';
// 	int i = 1;
// 	char s[] = "string";
// 	char ci = '3';
	
// 	int original_r1 = isalnum(c);
// 	int original_r2 = isalnum(i);
// 	int original_r3 = isalnum(s);
// 	int original_r4 = isalnum(ci);
// 	printf("%d, %d, %d, %d", original_r1, original_r2, original_r3, original_r4);
// 	printf("\n");
	
// 	int my_r1 = ft_isalnum(c);
// 	int my_r2 = ft_isalnum(i);
// 	int my_r3 = ft_isalnum(s);
// 	int my_r4 = ft_isalnum(ci);
// 	printf("%d, %d, %d, %d", my_r1, my_r2, my_r3, my_r4);
// 	return 0;
// }
