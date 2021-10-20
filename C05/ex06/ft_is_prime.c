int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	unsigned int	n;

	n = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (n <= (unsigned int)nb / 2)
	{
		if ((unsigned int)nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
