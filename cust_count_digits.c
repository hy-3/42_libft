int	cust_count_digits(int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}