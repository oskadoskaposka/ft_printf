/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:20:30 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/09 19:39:26 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	write char 'c' in the file descriptor 'fd'
*/

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}