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
#include <stdbooh.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
struct s_stock_str	*ft_fill_store(int i, char **av, t_stock_str *p);
int					ft_strlen(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*store;
	int			i;

	i = 0;
	store = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (store == 0)
		return (0);
	while (i < ac)
	{
		store + i = ft_fill_store(i, av[i], &(store[i]));
		i++;
	}
	store[i].size = 0;
	store[i].str = 0;
	store[i].copy = 0;
	return (store);
}

struct s_stock_str	*ft_fill_store(int i, char **av, t_stock_str *p)
{
	int		i;
	int		len;

	len = ft_strlen(*av);
	p->size = len;
	p->str = *av;
	i = 0;
	p->copy = (char *)malloc(sizeof(char) * (len + 1));
	if (p->copy == 0)
		return (0);
	while (i < len)
	{
		p->copy[i] = p->str[i];
		i++;
	}
	p->copy[i] = '\0';
	return (p);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
