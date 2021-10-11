#include <unistd.h>

void	ft_print_comb2(void);
void	circuit1(char a, char b, char c, char d);
void	circuit2(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char		a;
	char		b;
	char		c;
	char		d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	circuit1 (a, b, c, d);
}

void	circuit1(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			circuit2 (a, b, c, d);
			b++;
		}
		a++;
	}
}

void	circuit2(char a, char b, char c, char d)
{
	c = a;
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			if (10 * (a - '0') + (b - '0') < 10 * (c - '0') + (d - '0'))
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, " ", 1);
				write (1, &c, 1);
				write (1, &d, 1);
				if (a == '9' && b == '8')
					break ;
				write (1, ", ", 2);
			}
			d++;
		}
		c++;
	}
}
