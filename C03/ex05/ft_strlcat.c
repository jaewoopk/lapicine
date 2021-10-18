/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:19:36 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 11:29:32 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *arr);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		dest_len;
	unsigned int		src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while ((dest_len + i < size - 1) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (dest_len < size)
		return (dest_len + src_len);
	return (size + src_len);
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
