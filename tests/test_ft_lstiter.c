#include <stdio.h>
#include <stdlib.h>

#include "../libft.h"

void	func(void *content)
{
	char *s = (char *)content;
	int i = 0;
	while (s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
}

int	main(void)
{
	char *content_a = malloc(4);
	for(int i = 0; i < 3; i++)
		content_a[i] = 'a';
	t_list *a = ft_lstnew(content_a);
	printf("-- before --\ncontent(a): %s\n", a->content);
	ft_lstiter(a, func);
	printf("-- after --\ncontent(a): %s\n", a->content);
	return (0);
}
