#include <stdio.h>
#include <stdlib.h>

#include "../libft.h"

void	*func(void *content)
{
	char *s = (char *)content;
	int i = 0;
	while (s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return s;
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	char *c_a = malloc(4);
	for (int i = 0; i < 3; i++)
		c_a[i] = 'a';
	t_list *a = ft_lstnew(c_a);

	char *c_b = malloc(4);
	for (int i = 0; i < 3; i++)
		c_b[i] = 'b';
	t_list *b = ft_lstnew(c_b);

	ft_lstadd_back(&a, b);

	t_list *new = ft_lstmap(a, func, del);

	printf("-- address --\n");
	printf("a:%p\n", a);
	printf("b:%p\n", b);
	printf("b's next:%p\n", b->next);
	printf("new(a):%p\n", new);
	printf("new(b):%p\n", new->next);
	printf("new(b's next):%p\n", (new->next)->next);
	printf("-- content --\n");
	printf("a:%s\n", a->content);
	printf("b:%s\n", b->content);
	printf("new(a):%s\n", new->content);
	printf("new(b):%s\n", (new->next)->content);

	return (0);
}