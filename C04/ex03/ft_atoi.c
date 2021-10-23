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

#include <stdbool.h>

int	ft_atoi(char *str);
bool	ft_space_check(char *str);
bool	ft_oper_check(char *str);
int	ft_atoi_check(char *str, int count);

int	ft_atoi(char *str)
{
	int		ans;
	int		i;
	int		count;

	i = 0;
	ans = 0;
	count = 0;
	while (ft_space_check(str))
		str++;
	while (ft_oper_check(str))
	{
		if (*str == '-')
			count++;
		str++;
	}
	ans = ft_atoi_check(str, count);
	return (ans);
}

bool	ft_space_check(char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n')
		return (true);
	else if (*str == '\r' || *str == '\f' || *str == '\v')
		return (true);
	return (false);
}

bool	ft_oper_check(char *str)
{
	if (*str == '-' || *str == '+')
		return (true);
	return (false);
}

int	ft_atoi_check(char *str, int count)
{
	int		i;
	int		check;
	int		ans;

	i = 0;
	check = 1;
	ans = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ans += (str[i] - '0');
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
				ans *= 10;
			else
				break ;
		}
		else
			break ;
		i++;
	}
	if (count % 2 == 0)
		return (ans);
	return (-ans);
}
