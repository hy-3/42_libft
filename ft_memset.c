#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*char_b;

	char_b = (unsigned char *) b;
	while (len--)
		*char_b++ = (unsigned char) c;
	return (b);
}

/*
ref: https://linuxhint.com/memset_function/
*/
/* TODO: Q
## memset
Why does ‘bus error’ happen when the first arg is ’char *s = “abc”.
The error won’t happen when it is written as ‘char s[10] = “abc”‘’
*/
