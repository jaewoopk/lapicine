/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:16:10 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 09:12:14 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}
