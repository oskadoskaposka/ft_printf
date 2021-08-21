/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 00:49:01 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/21 01:12:02 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prints a string with hexadecimal number 'c' 
// and returns numbers of printed chars.

#include "ft_printf.h"

int	ft_print_x (unsigned int c, int letter)
{
	int		counter;
	char	*string;

	string = ft_itoh (c, letter);
	counter = ft_print_s (string);
	free (string);
	return (counter);
}