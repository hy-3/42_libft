#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "../libft.h"

int	main(void)
{
	char *s = "abc";

	char *r_o = strdup(s);
	char *r_m = ft_strdup(s);

	printf("s_addr: %p\n",s);
	printf("o:%s, o_addr:%p\nm:%s, m_addr:%p\n",r_o,r_o,r_m,r_m);

	return (0);
}