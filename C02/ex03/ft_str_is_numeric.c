/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:13:40 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 09:11:55 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int		length;
	int		count;

	if (*str == '\0')
		return (1);
	length = 0;
	count = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			count++;
		str++;
		length++;
	}
	if (length == count)
		return (1);
	else
		return (0);
}
