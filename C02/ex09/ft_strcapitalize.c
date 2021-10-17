char	*ft_strcapitalize(char *str);
int	is_right(char c);

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z' && i == 0)
		{
			str[0] -= 'a' - 'A';
		}
		else if (is_right(str[i-1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 'A' - 'a';
		}
		i++;
	}
	return (str);
}

int	is_right(char c)
{
	if (c < '0' || c > '9' )
	{
		if (c < 'A' || c > 'Z')
		{
			if (c < 'a' || c > 'z')
				return (1);
		}
	}
	return (0);
}
