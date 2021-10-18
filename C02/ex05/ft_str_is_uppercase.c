/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:15:51 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 09:12:10 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		count;

	if (*str == '\0')
		return (1);
	i = 0;
	count = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			count++;
		str++;
		i++;
	}
	if (i == count)
		return (1);
	else
		return (0);
}
