#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char *content = "abc";
	t_list *res = ft_lstnew(content);
	printf("%s %p\n", res->content, res->next);
	return (0);
}