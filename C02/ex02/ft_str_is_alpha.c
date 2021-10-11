int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			i++;
		else if (*str >= 'A' && *str <= 'Z')
			i++;
		str++;
	}
	if (i > 0)
		return (1);
	else
		return (0);
}
