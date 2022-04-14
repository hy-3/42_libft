#include <stdio.h>
#include <stdlib.h>

#include "../libft.h"

void	func(void *content)
{
	printf("inside - addr:%p\n",content);
	free(content);
}

int	main(void)
{
	char *content_a = malloc(4);
	content_a[0] = 'a';
	content_a[1] = 'a';
	content_a[2] = 'a';
	t_list *a = ft_lstnew(content_a);

	char content_b[4] = "bbb";
	t_list *b = ft_lstnew(content_b);
	
	ft_lstadd_back(&a, b);

	printf("-- before --\ncontent(a) = %s, next(a) = %p\n", a->content, a->next);
	ft_lstdelone(a, func);
	printf("-- after --\ncontent(a) = %s, next(a) = %p\n", a->content, a->next);
	
	return (0);
}
