char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	int		s;
	int		count;
	int		jcount;

	if (*to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (to_find[j])
		j++;
	while (str[i])
	{
		s = 0;
		jcount = j;
		k = i;
		count = 0;
		if (str[i] == to_find[s])
		{
			while (jcount)
			{
				if (str[k] == to_find[s])
				{
					k++;
					s++;
					count++;
				}
				jcount--;
			}
			if (count == j)
				break ;
		}
		i++;
	}
	if (count == j)
		return (&(str[i]));
	else
		return (0);
}
