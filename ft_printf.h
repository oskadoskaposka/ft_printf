/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:30:30 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/17 19:55:51 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "Libft/libft.h"

//apagar library da printf
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>


int	ft_printf(const char *string, ...);

//retirar pra colocar a libft
int	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);


#endif