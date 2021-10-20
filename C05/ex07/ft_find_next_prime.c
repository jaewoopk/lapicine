#include <stdio.h>

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	unsigned int	n;
	unsigned int	num;

	n = 2;
	if (nb < 2)
		return (2);
	num = (unsigned int)nb;
	while (n <= num / 2)
	{
		if (num % n == 0)
		{
			num++;
			n = 2;
			continue;
		}
		n++;
	}
	return (num);
}

