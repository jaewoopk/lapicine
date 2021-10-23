/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:43:41 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 19:46:01 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen(char *str);
int		ft_strcheck(char *str);
void	ft_putnbr(int nbr, char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(base);
	if (len <= 1 || ft_strcheck(base) == 0)
		return ;
	ft_putnbr(nbr, base);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	ft_strcheck(char *str)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr, char *str)
{
	char		c;
	int			len;
	long		nb;

	len = ft_strlen(str);
	nb = nbr;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb < len)
	{
		c = str[nb];
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr (nb / len, str);
		ft_putnbr (nb % len, str);
	}
}
