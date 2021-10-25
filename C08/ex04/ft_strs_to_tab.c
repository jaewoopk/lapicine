/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:09:20 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/25 17:09:22 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
int					ft_strlen(char *str);
char			*ft_strdup(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*store;
	int			i;

	i = 0;
	store = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (store == (void *)0)
		return (0);
	while (i < ac)
	{
		store[i].size = ft_strlen(*(av + i));
		store[i].str = *(av + i);
		store[i].copy = ft_strdup(*(av + i));
		i++;
	}
	store[i].size = 0;
	store[i].str = 0;
	store[i].copy = 0;
	return (store);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char		*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dest == (void *)0)
		return (0);
	while (i < ft_strlen(str))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
