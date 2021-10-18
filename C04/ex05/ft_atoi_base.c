/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:30:35 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 16:30:38 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
int		ft_strcheck(char *str);
int		ft_atoi(char *str, char *base, int base_len);

int	ft_atoi_base(char *str, char *base, int base_len)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(base);
	if (len <= 1 || ft_strcheck(base) == 0)
		return ;
	ft_atoi(str, base);
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

int	ft_atoi(char *str, char *base, int base_len)
{
	int		ans;
	int		i;
	int		count;

	i = 0;
	ans = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= base[0] && str[i] <= base[base_len - 1])
		{
			ans += str[i] - base[0];
			if (str[i + 1] < base[0] || str[i + 1] > base[base_len - 1])
				break ;
			ans *= base_len;
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
