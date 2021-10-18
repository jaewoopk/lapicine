/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:11:12 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 09:11:41 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			i++;
		else if (*str >= 'A' && *str <= 'Z')
			i++;
		str++;
		length++;
	}
	if (i == length)
		return (1);
	return (0);
}
