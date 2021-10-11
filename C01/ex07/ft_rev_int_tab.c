void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp;
	int		i;
	int		j;

	i = 0;
	j = size / 2;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		size--;
		i++;
	}
}
