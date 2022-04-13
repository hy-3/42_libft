int	ft_isascii(int i)
{
	if (0 <= i && i <= 127)
		return (1);
	else
		return (0);
}
