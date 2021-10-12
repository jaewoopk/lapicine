char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
