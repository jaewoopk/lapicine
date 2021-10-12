int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	while (n && (s1[i] || s2[i]))
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
