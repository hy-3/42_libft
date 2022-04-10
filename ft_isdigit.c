int	ft_isdigit(int i)
{
	if (47 < i && i < 58)
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
	
// 	int original_r1 = isdigit(c);
// 	int original_r2 = isdigit(i);
// 	int original_r3 = isdigit(s);
// 	int original_r4 = isdigit(ci);
// 	printf("%d, %d, %d, %d", original_r1, original_r2, original_r3, original_r4);
// 	printf("\n");
	
// 	int my_r1 = ft_isdigit(c);
// 	int my_r2 = ft_isdigit(i);
// 	int my_r3 = ft_isdigit(s);
// 	int my_r4 = ft_isdigit(ci);
// 	printf("%d, %d, %d, %d", my_r1, my_r2, my_r3, my_r4);
// 	return 0;
// }
