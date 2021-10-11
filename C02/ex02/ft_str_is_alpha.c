int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			return (1);
		else if (*str >= 'A' && *str <= 'Z')
			return (1);
		else
			return (0);
		str++;
	}
}
