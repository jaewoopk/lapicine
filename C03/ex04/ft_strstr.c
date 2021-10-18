/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:19:29 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/18 11:28:18 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char		*r_find;

	r_find = to_find;
	if (*to_find == '\0')
		return (str);
	while (1)
	{
		if (*r_find == '\0')
			return (str - (r_find - to_find));
		if (*str == *r_find)
			r_find++;
		else
			r_find = to_find;
		if (*str == '\0')
			break ;
		str++;
	}
	return (0);
}
