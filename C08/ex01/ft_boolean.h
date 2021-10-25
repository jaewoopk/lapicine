/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:09:03 by jaewopar          #+#    #+#             */
/*   Updated: 2021/10/25 17:09:05 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define	FT_BOOLEAN_H

# define	TRUE 1
# define	FALSE 0
# define	EVEN(nbr) (nbr % 2 == 0)
# define	SUCCESS 0
# define	EVEN_MSG "I have an even number of arguments.\n"
# define	ODD_MSG "I have an odd number of arguments.\n"

typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
