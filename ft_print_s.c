/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:19:06 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/21 10:21:59 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//print c and returns the number of printed chars

int	ft_print_s(char *string)
{
	int	counter;

	if (!string)
		return (ft_print_s("(null)"));
	counter = 0;
	while (*string)
	{
		ft_putchar_fd(*string, 1);
		string++;
		counter++;
	}
	return (counter);
}
