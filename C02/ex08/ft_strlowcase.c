char	*ft_strlowercase(char *str);

char	*ft_strlowercase(char *str)
{
	int		i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) += 'a' - 'A';
		i++;
	}
	return (str);
}
