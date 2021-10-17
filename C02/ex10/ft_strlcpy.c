unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *arr);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dest || !src)
		return (0);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

unsigned int	ft_strlen(char *arr)
{
	unsigned int		i;

	i = 0;
	while (arr[i])
	{
		i++;
	}
	return (i);
}
