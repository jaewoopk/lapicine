/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:30:35 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 19:44:32 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base);
int	ft_strcheck(char *str);
int	ft_atoi(char *str, char *base, int base_len);
int	ft_atoi_check(char *str, char *base, int base_len, int count);
int	ft_match(char *str, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		ans;

	i = 0;
	if (ft_strcheck(base) <= 1)
		return (0);
	ans = ft_atoi(str, base, ft_strcheck(base));
	return (ans);
}

int	ft_strcheck(char *str)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	len = i;
	i = 0;
	while (i < len)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
		|| str[i] == '\t' || str[i] == '\n')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi(char *str, char *base, int base_len)
{
	int		ans;
	int		i;
	int		count;

	i = 0;
	ans = 0;
	count = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		else if (*str == '\r' || *str == '\f' || *str == '\v')
			str++;
		else
			break;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count++;
		str++;
	}
	ans = ft_atoi_check(str, base, base_len, count);
	return (ans);
}

int	ft_atoi_check(char *str, char *base, int base_len, int count)
{
	int		i;
	int		j;
	long		ans;

	i = 0;
	ans = 0;
	while (str[i])
	{
		j = ft_match(&str[i], base);
		if (j != -1)
		{
			ans *= base_len;
			ans += j;
		}
		else
			break;
		i++;
	}
	if (count % 2 == 0)
		return (ans);
	return (-ans);
}

int	ft_match(char *str, char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (base[j])
	{
		if (str[i] == base[j])
		{
			return (j);
		}
		j++;
	}
	return (-1);
}
