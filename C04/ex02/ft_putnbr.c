/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:09:06 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 16:09:32 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char		c;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = -nb;
		}
		if (nb < 10)
		{
			c = nb + '0';
			write (1, &c, 1);
		}
		else
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
	}
}
