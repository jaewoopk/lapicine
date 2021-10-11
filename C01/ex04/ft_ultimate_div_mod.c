void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		q;
	int		r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}
