void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		r_div;
	int		r_mod;

	r_div = a / b;
	r_mod = a % b;
	*div = r_div;
	*mod = r_mod;
}
