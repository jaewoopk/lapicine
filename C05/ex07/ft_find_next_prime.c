/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:44:58 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/23 18:59:24 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);
int	ft_sqrt(int nb);

int	ft_find_next_prime(int nb)
{
	int		num;

	num = nb;
	while (1)
	{
		if (ft_is_prime(num) == 1)
			break;
		num++;
	}
	return (num);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	i = 2;
	n = ft_sqrt(nb);
	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (i <= n && nb % i != 0)
	{
		i++;
	}
	return (i > n);
}

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
	return ((int)n);
}
