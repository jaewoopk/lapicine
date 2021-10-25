#include <unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
void	ft_num_print(int n);

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	int		j;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (j < par[i].size)
		{
			write (1, &(par[i].str[j]), 1);
			j++;
		}
		write (1, "\n", 1);
		ft_num_print(par[i].size);
		write (1, "\n", 1);
		j = 0;
		while (j < par[i].size)
		{
			write (1, &(par[i].copy[j]), 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

void	ft_num_print(int n)
{
	char		c;

	if (n < 10)
	{
		c = n + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_num_print(n / 10);
		ft_num_print(n % 10);
	}
}
