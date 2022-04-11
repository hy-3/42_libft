int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	while ('0' <= str[i] && str[i] <= '9' && str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}	
	return (res * sign);
}