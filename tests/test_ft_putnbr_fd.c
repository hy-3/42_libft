#include <unistd.h>

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(2322300, 1);
	write(1, " ", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, " ", 1);
	ft_putnbr_fd(0, 1);
	write(1, " ", 1);
	return (0);
}