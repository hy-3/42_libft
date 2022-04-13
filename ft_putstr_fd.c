#include <unistd.h>

int	count_len_of_str(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	len_of_s;

	len_of_s = count_len_of_str(s);
	write(fd, s, len_of_s);
}
