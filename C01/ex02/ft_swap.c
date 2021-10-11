void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int			tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
