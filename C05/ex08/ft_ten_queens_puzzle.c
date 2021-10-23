/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:45:04 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/23 18:45:50 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int		ft_ten_queens_puzzle(void);
void	ft_recursive(int *board, int i, int *count);
bool	ft_is_right(int *board, int i);

bool	ft_is_right(int *board, int i)
{
	int		j;
	int		size;

	j = 0;
	size = 0;
	while (j < 10)
	{
		if (board[j] > -1)
			size = j + 1;
		j++;
	}
	j = 0;
	while (j < size)
	{
		if (board[i] == j)
			return (false);
		else if (board[j] - i == size - j)
			return (false);
		else if (board[j] - i == j - size)
			return (false);
		j++;
	}
	return (true);
}

void	ft_recursive(int *board, int i, int *count)
{
	int			check;
	char		c;

	check = 0;
	if (i == 10)
	{
		while (check < i)
		{
			c = board[check] + '0';
			write(1, &c, 1);
			check++;
		}
		write (1, "\n", 1);
		*count += 1;
	}
	while (check < 10)
	{
		if (ft_is_right(board, check))
		{
			board[i] = check;
			ft_recursive(board, i + 1, count);
			board[i] = -1;
		}
		check++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		board[10];
	int		count[1];
	int		i;

	count[0] = 0;
	i = 0;
	while (i < 10)
	{
		board[i] = -1;
		i++;
	}
	ft_recursive(board, 0, count);
	return (count[0]);
}
