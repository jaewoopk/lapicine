#include <unistd.h>

void	ft_print_combn(int n);
void	ft_print_num(int n, char ch[10], int count);

void	ft_print_combn(int n)
{
	int			i;
	char		arr[10];

	i = 0;
	while (i < 10)
	{
		arr[i] = '0';
		i++;
	}
	ft_print_num(n - 1, arr, n);
}

void	ft_print_num(int n, char ch[10], int count)
{
	int			r_count;

	while (*(ch + n) <= '9')
	{
		r_count = count;
		if (n == 0)
		{	
			while (r_count > 0)
			{
				write (1, ch + r_count - 1, 1);
				r_count--;
			}
			if (*(ch + count - 1) == 9 - count + 1 + '0')
				break ;
			write (1, ", ", 2);
		}
		else if (n > 0 && n < 10)
		{
			*(ch + n - 1) = (*(ch + n)) + 1;
			ft_print_num(n - 1, ch, r_count);
		}
		(*(ch + n))++;
	}
}
