/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:14:28 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 09:12:02 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		count;

	if (*str == '\0')
		return (1);
	i = 0;
	count = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			count++;
		str++;
		i++;
	}
	if (i == count)
		return (1);
	else
		return (0);
}
