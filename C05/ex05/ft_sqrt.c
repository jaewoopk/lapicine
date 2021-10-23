/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:49:10 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/23 18:44:51 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	long	n;
	int		tmp;

	n = 1;
	tmp = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (n * n <= (long)nb)
	{
		n++;
	}
	n--;
	if (n * n == (long)nb)
		return ((int)n);
	return (0);
}
