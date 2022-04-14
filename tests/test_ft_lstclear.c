#include <stdio.h>
#include <stdlib.h>

#include "../libft.h"

void	func(void *c)
{
	free(c);
}

int	main(void)
{
	char *content_a = malloc(4);
	for(int i = 0; i < 3; i++)
		content_a[i] = 'a';
	t_list *a = ft_lstnew(content_a);
	char *content_b = malloc(4);
	for(int i = 0; i < 3; i++)
		content_b[i] = 'b';
	t_list *b = ft_lstnew(content_b);
	ft_lstadd_back(&a, b);
	ft_lstclear(&a, func);
	printf("%p", a);
	system("leaks a.out");
	return (0);
}
