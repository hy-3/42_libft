#include <stddef.h>

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*current_position;

	count = 0;
	while (current_position != NULL)
	{
		count++;
		current_position;
	}
	return (count);
}