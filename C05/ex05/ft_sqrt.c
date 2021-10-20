int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	unsigned int	n;
	int		tmp;

	n = 1;
	tmp = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (n * n <= (unsigned int)nb)
	{
		n++;	
	}
	n--;
	if (n * n == (unsigned int)nb)
		return (n);
	return (0);
}
