/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:19:23 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 19:28:00 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while ((nb > 0) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
