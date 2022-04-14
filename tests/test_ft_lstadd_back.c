#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char *content_a = "aaa";
	t_list *a = ft_lstnew(content_a);

	char *content_b = "bbb";
	t_list *b = ft_lstnew(content_b);
	
	char *content_c = "ccc";
	t_list *c = ft_lstnew(content_c);
	
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);

	printf("(a)next:%p\n(b)addr:%p\n(b)next:%p\n(c)addr:%p\n(c)next:%p\n",
	a->next, b, b->next, c, c->next);
	return (0);
}
