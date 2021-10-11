int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int		i;
	int		count;

	if (*str == '\0')
		return (1);
	i = 0;
	count = 0;
	while (*str)
	{
		if (*str >= 0 && *str <= 128)
			count++;
		str++;
		i++;
	}
	if (i == count)
		return (1);
	else
		return (0);
}
