int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int		n;
	int		i;

	i = power;
	n = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i > 0)
		{
			n *= nb;
			i--;
		}
	}
	return (n);
}
