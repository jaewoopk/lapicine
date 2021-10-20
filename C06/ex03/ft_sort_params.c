/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:52:33 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/20 18:52:36 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_strcmp(char *s1, char *s2);
void	ft_print(char **arr);

int	main(int argc, char *argv[])
{
	int			i;
	int			j;
	char		*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]))
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_print(argv);
	return (0);
}

void	ft_print(char **arr)
{
	int			i;
	int			j;

	i = 1;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			write (1, &arr[i][j], 1);
			j++;
		}
		i++;
		write (1, "\n", 1);
	}
}

bool	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (true);
		else if (s1[i] < s2[i])
			return (false);
		i++;
	}
	return (false);
}
