char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char		*r_find;

	r_find = to_find;
	if (*to_find == '\0')
		return (str);
	while (1)
	{
		if (*r_find == '\0')
			return (str - (r_find - to_find));
		if (*str == *r_find)
			r_find++;
		else
			r_find = to_find;
		if (*str == '\0')
			break ;
		str++;
	}
	return (0);
}
