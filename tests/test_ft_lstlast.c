#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char *content_a = "aaa";
	t_list *a = ft_lstnew(content_a);

	char *content_b = "bbb";
	t_list *b = ft_lstnew(content_b);
	
	ft_lstadd_front(&a, b);
	
	char *content_c = "ccc";
	t_list *c = ft_lstnew(content_c);
	
	ft_lstadd_front(&b, c);

	printf("addr of c: %p\n", c);
	printf("a's last node: %p\n", ft_lstlast(a));
	printf("b's last node: %p\n", ft_lstlast(b));
	printf("c's last node: %p\n", ft_lstlast(c));
	return (0);
}
