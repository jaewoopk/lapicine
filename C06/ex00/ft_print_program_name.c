/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:52:07 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/20 19:28:29 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc >= 0)
	{
		while (argv[0][i])
		{
			write (1, &argv[0][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
