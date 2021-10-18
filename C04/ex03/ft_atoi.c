/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:09:36 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 19:43:49 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int		ans;
	int		i;
	int		count;

	i = 0;
	ans = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ans += str[i] - '0';
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break ;
			ans *= 10;
		}
		else if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 1)
		return (ans *= -1);
	else
		return (ans);
}
