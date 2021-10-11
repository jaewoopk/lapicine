char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (*src)
	{
		*(dest + i) = *src;
		src++;
	}
	return (dest);
}
