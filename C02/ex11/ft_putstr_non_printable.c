#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	trans_to_16(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &(str[i]), 1);
		else
		{
			trans_to_16(str[i]);
		}
		i++;
	}
}

void	trans_to_16(unsigned char c)
{
	unsigned char		ch1;
	unsigned char		ch2;

	if (c / 16 < 10)
		ch1 = (c / 16) + '0';
	else
		ch1 = (c / 16) + 'a' - 10;
	if (c % 16 < 10)
		ch2 = (c % 16) + '0';
	else
		ch2 = (c % 16) + 'a' - 10;
	write (1, "\\", 1);
	write (1, &ch1, 1);
	write (1, &ch2, 1);
}
