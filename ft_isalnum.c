int	ft_isalnum(int i)
{
	if ((64 < i && i < 91) || (96 < i && i < 123) || (47 < i && i < 58))
		return (1);
	else
		return (0);
}
