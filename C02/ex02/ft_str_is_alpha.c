int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			i++;
		else if (*str >= 'A' && *str <= 'Z')
			i++;
		str++;
		length++;
	}
	if (i == length)
		return (1);
	return (0);
}
