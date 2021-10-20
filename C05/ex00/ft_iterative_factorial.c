int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int		n;

	n = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
