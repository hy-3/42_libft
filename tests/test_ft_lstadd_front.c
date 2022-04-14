#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char *content_a = "aaa";
	t_list *a = ft_lstnew(content_a);
	char *content_b = "bbb";
	t_list *b = ft_lstnew(content_b);

	ft_lstadd_front(&a, b);
	printf("a's content:%s, a's next%p\n b's content:%s, b's next:%p, addr of b%p\n",
	a->content, a->next, b->content, b->next, b);
}