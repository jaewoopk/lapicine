/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:46:34 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/13 16:40:06 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	circuit1(char a, char b, char c);
void	circuit2(char a, char b, char c);
void	circuit3(char a, char b, char c);

void	ft_print_comb(void)
{
	char		a;
	char		b;
	char		c;

	a = '0';
	b = '0';
	c = '0';
	circuit1 (a, b, c);
}

void	circuit1(char a, char b, char c)
{
	while (a <= '9')
	{
		b = a + 1;
		circuit2 (a, b, c);
		a++;
	}
}

void	circuit2(char a, char b, char c)
{
	while (b <= '9')
	{
		c = b + 1;
		circuit3 (a, b, c);
		b++;
	}
}

void	circuit3(char a, char b, char c)
{
	while (c <= '9')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a == '7' && b == '8' && c == '9')
			break ;
		write (1, ", ", 2);
		c++;
	}
}
