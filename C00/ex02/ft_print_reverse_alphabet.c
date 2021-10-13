/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:46:10 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/13 13:46:12 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	write (1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
