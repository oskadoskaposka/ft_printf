/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:36:42 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/19 23:24:19 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prints a string with int number 'c' and returns numbers of printed chars

#include "ft_printf.h"

int	ft_print_di(int c)
{
	int		counter;
	char	*string;

	string = ft_itoa(c);
	counter = ft_print_s(string);
	free(string);
	return (counter);
}
